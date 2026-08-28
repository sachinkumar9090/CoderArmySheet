class Solution {
  public:
    void booleanMatrix(vector<vector<int>>& mat) {
        // code here
        
        int row = mat.size();
        int col = mat[0].size();
        
        vector<int> r(row, 0);
        vector<int> c(col, 0);

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j]==1){
                    r[i] = 1;
                    c[j] = 1;
                }
            }
        }
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
              if(r[i] == 1 || c[j] == 1) {
                 mat[i][j] = 1;
        }
    }
}

    }
};
