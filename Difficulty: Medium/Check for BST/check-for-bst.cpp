/* Structure of a Binary Search Tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */
void inorder1(Node *root,vector<int> &ans){
    if(!root){
        return;
    }
         inorder1(root->left,ans);
         ans.push_back(root->data);
         inorder1(root->right,ans);
    
}

class Solution {
  public:
    bool isBST(Node* root) {
        // code here
        vector<int> ans;
        inorder1(root,ans);
        
        if(ans.size()==1){
            return true;
        }
        
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i]>=ans[i+1]){
                return false;
                break;
            }
        }
        return true;
        
        
    }
};