class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int temp = arr[arr.size()-1];
        for(int i=arr.size()-1;i>=0;i--){
            arr[i+1] =arr[i];
        }
        arr[0] = temp;
        
    }
};