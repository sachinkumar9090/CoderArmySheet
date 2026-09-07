/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> rightView(Node *root) {
        //  code here
        vector<int> ans;
        if(!root){
            return ans;
        }
        queue<Node*> st;
        st.push(root);
        
        while(!st.empty()){
            int n = st.size();
            ans.push_back(st.front()->data);
            while(n--){
                Node *temp = st.front();
                st.pop();
                if(temp->right){
                    st.push(temp->right);
                }
                if(temp->left){
                    st.push(temp->left);
                }
            }
        }
        return ans;
    }
};