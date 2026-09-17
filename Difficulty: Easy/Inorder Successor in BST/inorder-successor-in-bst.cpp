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
void inord1(Node *root,vector<int> &ans){
    if(!root){
        return;
    }
    inord1(root->left,ans);
    ans.push_back(root->data);
    inord1(root->right,ans);
}

class Solution {
  public:
    int inOrderSuccessor(Node *root, Node *k) {
        // code here
        vector<int> ans;
        inord1(root,ans);
        for(int i=0;i<ans.size()-1;i++){
            if(k->data==ans[i]){
                return ans[i+1];
                break;
            }
        }
        return -1;
    }
};