#include <iostream>
#include <cctype>

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        for(string c : tokens)
        {
            if(c == "+" ||
            c == "-" ||
            c == "*" ||
            c == "/")
            {
                int second = nums.top();
                nums.pop();
                int first = nums.top();
                nums.pop();
                if(c == "+")
                {
                    first += second;
                }
                else if(c == "-")
                {
                    first -= second;
                }
                else if(c == "*")
                {
                    first *= second;
                }
                else
                {
                    first /= second;
                }
                nums.push(first);
            }
            else
            {
                nums.push(stoi(c));
            }
        }
        return nums.top();
    }
};