class Solution {
  public:
    void sortStack(stack<int> &st) {
        // code here

        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            st.push(ans[i]);
        }
    }
};
