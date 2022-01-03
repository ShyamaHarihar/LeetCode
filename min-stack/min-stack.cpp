class MinStack {
public:
    stack<pair<int,int>> t;
    MinStack() {    
    }
    
    void push(int val) {
    if(t.empty())
    {
        t.push({val,val});
    }
        else{
            t.push({val,min(val,t.top().second)});
        }
    }
    
    void pop() {
    if(t.empty())
    {
        return;
    }
    t.pop();
    }
    
    int top() {
    if(t.empty())
    {
        return -1;
    }
        int x=t.top().first;
        return x;
    }
    
    int getMin() {
    if(t.empty())
    {
        return -1;
    }
        int x=t.top().second;
        return x;
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