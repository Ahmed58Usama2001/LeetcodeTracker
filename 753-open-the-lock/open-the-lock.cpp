class Solution {
public:

    char next(char c)
    {
        if(c=='9')
        return '0';

        return c+1;
    }

    char prev(char c)
    {
        if(c=='0')
        return '9';

        return c-1;
    }

    int openLock(vector<string>& deadends, string target) {
        unordered_set<string>visited{deadends.begin() , deadends.end()};
        string start="0000";
        queue<string>q;

        if(visited.count(start))
        return -1;

        if(start==target)
        return 0;

        q.push(start);
        visited.insert(start);

        for(int level=0 , sz=1; !q.empty() ; sz=q.size(),level++)
        {
            while(sz--)
            {
                string cur= q.front();
                q.pop();

                for(int i=0;i<4;i++)
                {   
                    cur[i]=next(cur[i]);
                    if(cur==target)
                    return level+1;
                    if(visited.insert(cur).second)
                    q.push(cur);

                    cur[i]=prev(prev(cur[i]));
                    if(cur==target)
                    return level+1;
                    if(visited.insert(cur).second)
                    q.push(cur);

                    cur[i]=next(cur[i]);
                }
            }
        }

        return -1;
    }

  
};