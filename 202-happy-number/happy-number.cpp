class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>set;

        while(n!=1)
        {
            if(set.find(n)==set.end())
            set.insert(n);
            else
            return false;

            int sum=0;
            while(n)
            {
                sum+=pow(n%10,2);
                n=n/10;
            }
            n=sum;
        }

        return true;
    }
};