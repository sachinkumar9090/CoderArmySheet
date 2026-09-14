/* Definition for Node
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

void searching(Node *root,int key,bool &isvalid){
    if(!root){
      isvalid = 0;
      return;
    }
    if(root->data == key){
        isvalid = 1;
        return;
    }
    if(root->data>key){
        searching(root->left,key,isvalid);
    }else{
        searching(root->right,key,isvalid);
    }
}

class Solution {
  public:
    bool search(Node* root, int key) {
        // code here
        bool isvalid = 1;
        searching(root,key,isvalid);
        return isvalid;
        
    }
};