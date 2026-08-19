class Solution {
  public:
    bool pairWiseConsecutive(stack<int>& st) {
        // code here
        if(st.size()%2==1){
            st.pop();
        int n1,n2;
        while(!st.empty()){
            n1 = st.top();
            st.pop();
            n2 = st.top();
            st.pop();
         if(abs(n2-n1)!=1)
            return false;
        }
    }else {
         int n1,n2;
        while(!st.empty()){
            n1 = st.top();
            st.pop();
            n2 = st.top();
            st.pop();
         if(abs(n2-n1)!=1)
            return false;;
        
        }
    }
        return true;
    }
};