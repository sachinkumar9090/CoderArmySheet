class SpecialStack {
  public:
    SpecialStack() {

    }
    stack<int> st1;

    void push(int x) {
        // Add an element to the top of Stack
        if(st1.empty()){
            st1.push(x*101+x);

        }else {
            st1.push(x*101+min(st1.top()%101,x));
        }
        
    }

    void pop() {
            int element = st1.top()/101;
            st1.pop();
        }


    int peek() {
        // Returns top element of the Stack
        if(st1.empty())
        return -1;
        
        return st1.top()/101;
        
    }

    bool isEmpty() {
        // Check if stack is empty
        return st1.empty();
    }

    int getMin() {
        // Finds minimum element of Stack
        if(st1.empty())
        return -1;
        else
        return st1.top()%101;
    }
};