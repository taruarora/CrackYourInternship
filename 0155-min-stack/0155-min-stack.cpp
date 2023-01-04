class MinStack {
public:
    stack<pair<int, int>> s; 
    int min;
    MinStack() {
        min =INT_MAX;
    }
    
    void push(int val) {
        if (s.size() == 0) {
            min = val;
        } 
        else {
            min = s.top().second;
        }
        if(min>val)
            min=val;
        s.push({val, min});
        
    }
    
    void pop() {
        s.pop();
        
    }
    
    int top() {
        return s.top().first;
        
    }
    
    int getMin() {
        return s.top().second;
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */