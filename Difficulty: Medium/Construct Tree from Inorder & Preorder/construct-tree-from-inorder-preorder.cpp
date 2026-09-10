/* Structure of a Tree Node
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
  
  int find(vector<int> &inorder,int start,int end,int target){
      for(int i=start;i<=end;i++){
          if(inorder[i]==target){
              return i;
          }
      }
      return -1;
  }
  
  Node *tree(vector<int> &inorder,vector<int> &pre,int Instart,int Inend,int index){
      if(Instart>Inend){
          return NULL;
      }
      Node *root = new Node(pre[index]);
      
      int pos = find(inorder,Instart,Inend,pre[index]);
      
      root->left = tree(inorder,pre,Instart,pos-1,index+1);
      root->right = tree(inorder,pre,pos+1,Inend,index+(pos-Instart)+1);
      
      return root;
      
      
  }
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        // code here
    
        
        return tree(inorder,preorder,0,preorder.size()-1,0);
        
        
    }
};