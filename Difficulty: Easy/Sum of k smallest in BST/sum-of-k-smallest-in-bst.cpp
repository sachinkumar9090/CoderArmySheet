/* Structure of a Tree Node
class Node {
    int data;
    Node* right;
    Node* left;
    Node(int x){
        data = x;
        right = nullptr;
        left = nullptr;
    }
}; */
void ino(Node *root,vector<int> &ans){
    if(!root){
        return;
    }
    ino(root->left,ans);
    ans.push_back(root->data);
    ino(root->right,ans);
}

class Solution {
  public:
    int sum(Node* root, int k) {
        // code here
        
        vector<int> ans;
        ino(root,ans);
        
        int sum = 0;
        for(int i=0;i<k;i++){
            sum +=ans[i];
        }
        
        return sum;
    }
};