class Solution {
    bool recursive(int x,int n)
    {      
        if(pow(4,x)>n)
        return false;

        if(pow(4,x)==n)
        return true;

        return recursive(x+1,n);
    }
public:
    bool isPowerOfFour(int n) {
       return recursive(0,n);
    }
};