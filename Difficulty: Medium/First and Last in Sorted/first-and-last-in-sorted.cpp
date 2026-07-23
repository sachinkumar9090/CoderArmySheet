class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int first = -1;
        int end = -1;
        for(int i=0;i<arr.size();i++){
            if(arr[i] == x) {
                first = i;
            }
        }
        int n = arr.size();
        for(int j=n-1;j>=0;j--){
            if(arr[j] == x){
                end = j;
            }
        }
        
        return {end,first};
    }
};