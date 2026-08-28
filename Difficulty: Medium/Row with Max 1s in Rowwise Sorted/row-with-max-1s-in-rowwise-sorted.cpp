class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        
        int maxc = 0;
        int n = arr.size();
        int m = arr[0].size();
        int ans = -1;
        int i = 0;
         while(i<n){
             int count = 0;
             for(int j=0;j<m;j++){
                 if(arr[i][j]==1){
                     count++;
                 }
             }
             if(maxc<count){
                 maxc = count;
                 ans = i;
             }
             i++;
         }
         
        return ans;
    }
        
};