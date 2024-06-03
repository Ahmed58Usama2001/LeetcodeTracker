class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> records;
        int digit,x;

       for (const auto& op : operations) { 
        if(op[0]=='C')
           records.pop();
        else if(op[0]=='D')
        {
            digit=records.top()*2;
            records.push(digit);
        }
        else if(op[0]=='+')
        {
            x=records.top();
            records.pop();
            digit=records.top();
            records.push(x);
            records.push(x+digit);
        }
         else{
            digit =stoi(op);
            records.push(digit);
        }
        if(!records.empty())
        cout<<records.top()<<" ";
    }

    x=0;

    while(!records.empty())
    {
        x+=records.top();
        records.pop();
    }

    return x;

    }
};