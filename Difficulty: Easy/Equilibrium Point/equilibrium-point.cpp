class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        int totalsum = 0;
        for(int i=0;i<arr.size();i++){
            totalsum +=arr[i];
        }
        int ans = -1;
        int left = 0;
        for(int i=0;i<arr.size();i++){
             totalsum -=arr[i];
            if(left == totalsum){
                return i;
            }else {
                left +=arr[i];
            }
        }
        return -1;
    }
};