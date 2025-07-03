// Last updated: 7/2/2025, 11:53:34 PM
class MinStack {
public:
    stack<int> s, minstack;
    int min1, min2;
    MinStack() {
        stack<int> s;
    }
    
    void push(int val) {
        s.push(val);
        if(minstack.empty() || minstack.top() > val)minstack.push(val);
        else {
            int top = minstack.top();
            minstack.push(top);
        }
    }
    
    void pop() {
        s.pop();
        minstack.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minstack.top();
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