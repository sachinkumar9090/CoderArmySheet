/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};

*/

void isid(Node *r1,Node *r2,bool &isvalid){
    
    if(!r1 && !r2){
        return;
    }
    if(!r1 && r2 || r1 && !r2){
        isvalid =0;
        return;
    }
    
    if(r1->data != r2->data){
        isvalid = 0;
    }
    
    isid(r1->left,r2->left,isvalid);
    isid(r1->right,r2->right,isvalid);
}
class Solution {
  public:
    bool isIdentical(Node* r1, Node* r2) {
        // code here
       bool isvalid = 1;
       isid(r1,r2,isvalid);
       return isvalid;
       
    }
};