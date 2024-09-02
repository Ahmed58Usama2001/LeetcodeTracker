class Solution {
    bool recursive(int x,int n)
    {      
        if(pow(3,x)>n)
        return false;

        if(pow(3,x)==n)
        return true;

        return recursive(x+1,n);
    }
public:
    bool isPowerOfThree(int n) {
        return recursive(0,n);
    }
};