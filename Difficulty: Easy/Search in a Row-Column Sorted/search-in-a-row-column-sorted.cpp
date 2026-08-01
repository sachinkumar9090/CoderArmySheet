class Solution {
  public:
    bool matSearch(vector<vector<int>> &arr, int x) {
        // code here
        int row = arr.size();
        int col = arr[0].size();
        for(int i=0;i<row;i++){
            if(arr[i][0] <=x && arr[i][col-1]){
                for(int j=0;j<col;j++){
                    if(arr[i][j]==x){
                        return true;
                        break;
                    }
                }
            }
        }
        return false;
    }
};