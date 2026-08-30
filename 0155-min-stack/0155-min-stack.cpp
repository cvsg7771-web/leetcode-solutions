class MinStack {
public:
stack<pair<int,int>>st;
    MinStack() {
        stack<pair<int,int>>st;
        
    }
    
    void push(int value) {
        pair<int,int> a;
        a.first=value;
        if(st.empty())
        {
            a.second=value;
            st.push(a);
            return;
        }
        a.second=min(st.top().second,value);
        st.push(a);
        
    }
    
    void pop() {
        st.pop();
        
    }
    
    int top() {
        return st.top().first;
        
    }
    
    int getMin() {
        return st.top().second;
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */