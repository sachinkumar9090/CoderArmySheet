/* Structure of binary tree node
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int x) {
        data = x;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
  
  int find(vector<int> &inorder,int start,int end,int target){
      for(int i= start;i<=end;i++){
          if(inorder[i] == target){
              return i;
          }
      }
      return -1;
  }
  
    Node *tree(vector<int> &inorder,vector<int> &post,int start,int end,int index){
        if(start>end){
            return NULL;
        }
        Node *root = new Node(post[index]);
        int pos = find(inorder,start,end,post[index]);
        root->right = tree(inorder,post,pos+1,end,index-1);
        
        root->left = tree(inorder,post,start,pos-1,index-(end-pos)-1);
        
        return root;
        
    }
    Node *buildTree(vector<int> &inorder, vector<int> &postorder) {
        // code here
        return tree(inorder,postorder,0,postorder.size()-1,postorder.size()-1);
    }
};