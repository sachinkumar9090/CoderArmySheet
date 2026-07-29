class Solution {
  public:
    vector<int> nextGreatest(vector<int> arr) {
        // code here
        int maxright = -1;
        for(int i=arr.size()-1;i>=0;i--){
            int temp = arr[i];
            arr[i] = maxright;
            maxright = max(maxright,temp);
        }
        return arr;
        
    }
};