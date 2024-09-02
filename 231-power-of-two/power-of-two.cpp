class Solution {

    bool recursive(int x,int n)
    {      
        if(pow(2,x)>n)
        return false;

        if(pow(2,x)==n)
        return true;

        return recursive(x+1,n);
    }
    
public:
    bool isPowerOfTwo(int n) {
        return recursive(0,n);
    }
};