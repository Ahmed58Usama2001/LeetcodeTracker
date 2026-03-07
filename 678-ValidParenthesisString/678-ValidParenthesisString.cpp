// Last updated: 3/7/2026, 4:16:05 PM
class Solution {
public:
    bool checkValidString(string s) {
       int cmin=0,cmax=0;

       for(char c:s)
       {
        if (c == '(') {
                cmax++;
                cmin++;
            } else if (c == ')') {
                cmax--;
        cmin=max(cmin-1,0);
            } else if (c == '*') {
                cmax++;
        cmin=max(cmin-1,0);
            }
        
        if(cmax<0)
        return false;
       }

       return cmin==0;
    }
};