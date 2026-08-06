class SpecialStack {
  public:
    SpecialStack() {
        // Define Stack
    }
    stack<int> st;

    void push(int x) {
        // Add an element to the top of Stack
        if(st.empty()){
            st.push(x*101+x);
        }else {
            st.push(x*101+min(x,st.top()%101));
        }
        
    }

    void pop() {
        // Remove the top element from the Stack
        int element = st.top()/101;
        st.pop();
    }

    int peek() {
        // Returns top element of the Stack
        if(st.empty())
        return -1;
        
        return st.top()/101;
    }

    bool isEmpty() {
        // Check if stack is empty
        return st.empty();
    }

    int getMin() {
        // Finds minimum element of Stack
        if(st.empty())
        return -1;
        else 
        return st.top()%101;
    }
};