/* Structure of a Binary Tree Node
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

void ksum(Node *root,int &k,int &sum){
    if(!root){
        return;
    }
    ksum(root->right,k,sum);
    k--;
    if(k>=0){
        sum = root->data;
    }
    ksum(root->left,k,sum);
}

class Solution {
  public:
    int kthLargest(Node *root, int k) {
        // code here
        int sum = 0;
        ksum(root,k,sum);
        return sum;
        
    }
};