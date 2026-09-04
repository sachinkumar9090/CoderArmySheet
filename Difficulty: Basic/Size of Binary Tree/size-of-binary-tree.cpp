/* Node Structure
class Node {
public:
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

void getsize(Node *root,int &sum){
    if(root==NULL){
        return;
    }
    sum++;
    getsize(root->left,sum);
    getsize(root->right,sum);
    
}

class Solution {
  public:
    int getSize(Node* root) {
        
        // code here
        int sum =0;
        getsize(root,sum);
        return sum;
        
    }
};