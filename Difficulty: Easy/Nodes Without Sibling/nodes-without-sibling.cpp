/* Definition of Tree Node
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

void nosib(Node *root,vector<int> &ans){
    
    if(!root){
        return;
    }
    
    if(root->left && !root->right){
        ans.push_back(root->left->data);
    }
    if(!root->left && root->right){
        ans.push_back(root->right->data);
    }
    
    nosib(root->left,ans);
    nosib(root->right,ans);
    
}

class Solution {
  public:
    vector<int> noSibling(Node* root) {
        // code here
        vector<int> ans;
        nosib(root,ans);
        
        if(ans.empty()){
            ans.push_back(-1);
        }
        sort(ans.begin(),ans.end());
        
        return ans;
        
    }
};