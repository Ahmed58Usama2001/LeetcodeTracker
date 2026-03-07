// Last updated: 3/7/2026, 4:15:29 PM
class Solution {
public:
    int fib(int n) {
        if(n<=1)
        return n;

        return fib(n-1)+fib(n-2);
    }
};