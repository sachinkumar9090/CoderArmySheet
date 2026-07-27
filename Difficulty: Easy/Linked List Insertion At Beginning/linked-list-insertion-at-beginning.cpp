/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node *insertAtFront(Node *head, int x) {
        // Code here
        if(head == NULL){
            head = new Node(x);
        }else{
            Node *temp;
            temp = new Node(x);
            temp->next = head;
            head = temp;
        }
    }
};