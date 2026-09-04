/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution

void countes(Node *root , int &count){
    if(root==NULL){
        return;
    }
    if(!root->left && !root->right){
        count++;
        return;
    }
    countes(root->left,count);
    countes(root->right,count);
    
}
class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        // write code here
        int count =0;
        countes(root,count);
        return count;
        
    }
};