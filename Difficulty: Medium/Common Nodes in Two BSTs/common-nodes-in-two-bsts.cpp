/* Structure of a Binary Search Tree node
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

void find2(Node *r2,vector<int> &ans){
    if(!r2){
        return;
    }
     find2(r2->left,ans);
     ans.push_back(r2->data);
     find2(r2->right,ans);
     
}

void find1(Node *r1,vector<int> &ans){
    if(!r1){
        return;
    }
     find1(r1->left,ans);
     ans.push_back(r1->data);
     find1(r1->right,ans);
     
}

class Solution {
  public:
    vector<int> findCommon(Node* r1, Node* r2) {
        // code here
        vector<int> arr;
        vector<int> ans;
        find1(r1,ans);
        find2(r2,ans);
        
        unordered_map<int,int> maps;
        for(int i=0;i<ans.size();i++){
            maps[ans[i]]++;
        }
        
        for(auto x :maps){
            if(x.second == 2){
                arr.push_back(x.first);
            }
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
};