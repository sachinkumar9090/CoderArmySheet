/* Tree Node structure
class Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = right = nullptr;
    }
};*/
void deadend(Node *root,int &low,int &high,bool &isvalid){
    if(!root){
        return;
    }
    if(!root->left && !root->right){
        if(abs(root->data - low)== 1 && abs(root->data - high)==1){
              isvalid = true;
              return;
        }
    }
    deadend(root->left,low,root->data,isvalid);
    deadend(root->right,root->data,high,isvalid);
    
}

class Solution {
  public:
    bool isDeadEnd(Node *root) {
        // Code here
       bool isvalid = false;
       int low = 0,high = INT_MAX;
       deadend(root,low,high,isvalid);
       
       return isvalid;
       
        
    }
};