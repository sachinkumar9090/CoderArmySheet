class Solution {
  public:
  
  
  void leafNode(vector<int> &preorder,int start,int end, vector<int> &ans){
      if(start>end){
          return;
      }
      
      if(start==end){
          ans.push_back(preorder[start]);
          return;
      }
      
      int root = preorder[start];
      
      int i = start +1;
      
      while(i<=end && preorder[i]<root){
          i++;
      }
      
      leafNode(preorder,start+1,i-1,ans);
      leafNode(preorder,i,end,ans);
  }
    vector<int> leafNodes(vector<int>& preorder) {
        // code here
        vector<int> ans;
        leafNode(preorder,0,preorder.size()-1,ans);
        
        return ans;
        
    }
};