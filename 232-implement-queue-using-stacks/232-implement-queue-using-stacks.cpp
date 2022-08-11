class MyQueue {
public:
    stack<int> s;
    stack<int> q;
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        if(q.empty()){
            while(!s.empty()){
                q.push(s.top());
                s.pop();
            }
        }
        int ans = q.top();
        q.pop();
        return ans;
    }
    
    int peek() {
        if(q.empty()){
            while(!s.empty()){
                q.push(s.top());
                s.pop();
            }
        }
        return q.top();
    }
    
    bool empty() {
        if(s.empty()) return q.empty();
        return false;
    }
};