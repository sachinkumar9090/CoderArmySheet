/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

void inorder(Node *root,vector<int> &ans){
    if(root==NULL){
        return;
    }
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
}

class Solution {
  public:
    vector<int> inOrder(Node* root) {
        // code here
        vector<int> ans;
        inorder(root,ans);
        return ans;
        
        
    }
};