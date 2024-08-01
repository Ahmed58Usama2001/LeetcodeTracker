class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> s;
        int x,y;

        for(string c : tokens)
        {
            if(c=="+")
            {
                y=stoi(s.top()); s.pop();
                x=stoi(s.top()); s.pop();

                s.push(to_string(x+y));
            }
            else if(c=="-")
            {
                y=stoi(s.top()); s.pop();
                x=stoi(s.top()); s.pop();

                s.push(to_string(x-y));
            }
            else if(c=="*")
            {
                y=stoi(s.top()); s.pop();
                x=stoi(s.top()); s.pop();

                s.push(to_string(x*y));
            }
            else if(c=="/")
            {
                y=stoi(s.top()); s.pop();
                x=stoi(s.top()); s.pop();

                s.push(to_string(x/y));
            }
            else
            s.push(c);
        }

        return stoi(s.top());
    }
};