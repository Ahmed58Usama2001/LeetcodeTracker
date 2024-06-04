class MyStack {
public:

    int num;
    queue<int> q1;
    queue<int> q2;
    MyStack() {
       
    }
    
    void push(int x) {
        if(q2.empty())
        q1.push(x);
        else
        q2.push(x);
    }
    
    int pop() {
        if(q2.empty())
        {   
            while(q1.size()!=1)
            {
                q2.push(q1.front());
                q1.pop();
            }
            num= q1.front();
            q1.pop();
            return num;
        }
        else
        {
            while(q2.size()!=1)
            {
                q1.push(q2.front());
                q2.pop();
            }
            num= q2.front();
            q2.pop();
            return num;
        }
    }
    
    int top() {
        if(q2.empty())
        {   
            while(q1.size()!=1)
            {
                q2.push(q1.front());
                q1.pop();
            }
            num= q1.front();
            q1.pop();
            q2.push(num);
            return num;
        }
        else
        {
            while(q2.size()!=1)
            {
                q1.push(q2.front());
                q2.pop();
            }
           num= q2.front();
            q2.pop();
            q1.push(num);
            return num;
        }
    }
    
    bool empty() {
        return q1.empty() && q2.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */