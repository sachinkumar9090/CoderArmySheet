/* Tree Node Structure
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

void getsum(Node *root,int &sum){
    if(root==NULL){
        return;
    }
    sum +=root->data;
    getsum(root->left,sum);
    getsum(root->right,sum);
}

class Solution {
  public:
    int sumBT(Node* root) {
        // code here
        int sum =0;
        getsum(root,sum);
        return sum;
        
    }
};