class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<int> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                st.push(s[i]);
            }else if(st.empty()){
                return 0;
            }else {
                if(s[i] == ')' && st.top()=='('|| s[i] == ']' && st.top()=='[' || s[i] == '}' && st.top()=='{'){
                st.pop();
            }else
            return 0;
        }
      }
      return st.empty();
    }
};