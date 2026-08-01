class Solution {
  public:
    vector<int> rowSum(vector<vector<int>>& mat) {
        // Code here
        vector<int> ans;
        int sum = INT_MIN;;
        int row = mat.size();
        int col = mat[0].size();
        
        for(int i=0;i<row;i++){
          int total = 0;
        for(int j=0;j<col;j++){
            total +=mat[i][j];
        }
        if(sum<total){
            sum = total;
            ans.push_back(sum);
        }else {
            sum = total;
            ans.push_back(sum);
        }
        }
        return ans;
    }
};
