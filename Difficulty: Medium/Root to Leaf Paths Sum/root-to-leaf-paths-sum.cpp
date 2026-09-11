/* Structure of a Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
}; */
void roottoleaf(Node *root,int path,int &value){
    if(!root){
        return;
    }
    path = path*10 + root->data;
    
    if(!root->left && !root->right){
        value +=path;
    }
    roottoleaf(root->left,path,value);
    roottoleaf(root->right,path,value);
    
}


class Solution {
  public:
    int treePathsSum(Node *root) {
        // code here
        int path = 0;
        int value = 0;
        roottoleaf(root,path,value);
        return value;
    }   
};