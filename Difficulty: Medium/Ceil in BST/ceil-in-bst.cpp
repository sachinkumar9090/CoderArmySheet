/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
void mindif(Node *root,vector<int> &ans){
    if(!root)
    return;

    mindif(root->left,ans);
    ans.push_back(root->data);
    mindif(root->right,ans);
}

class Solution {
  public:
    int findCeil(Node* root, int x) {
        // code here
        vector<int> ans;
        mindif(root,ans);
        int eme = -1;
        for(int i=0;i<ans.size();i++){
            if(x<=ans[i]){
                eme = ans[i];
                break;
            }
        }
        return eme;
    }
};
