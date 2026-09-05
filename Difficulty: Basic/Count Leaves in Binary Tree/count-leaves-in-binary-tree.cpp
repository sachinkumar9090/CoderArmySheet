/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
void countleaf(Node *root,int &count){
    if(!root){
        return;
    }
    if(!root->left && !root->right){
        count++;
        return;
    }
    countleaf(root->left,count);
    countleaf(root->right,count);
    
}

// Class Solution
class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        // write code here
        int count = 0;
        countleaf(root,count);
        return count;
        
        
    }
};