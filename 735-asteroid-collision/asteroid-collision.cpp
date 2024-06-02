class Solution {
public:

    bool willCrash(int top,int coming)
    {
        return !(top>0&&coming>0 || top<0&&coming<0 || top<0&&coming>0 );
    }

    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stk1;
        stack<int> stk2;
        bool isEqual;
        
        for(int i=0;i<asteroids.size();i++)
        {   isEqual=false;

            if(stk1.empty() || !willCrash(stk1.top(),asteroids[i]))
            stk1.push(asteroids[i]);

            else
            {  
                while(!stk1.empty() && willCrash(stk1.top(),asteroids[i]) && abs(stk1.top()) <= abs(asteroids[i]))
                {   
                    if( abs(stk1.top()) == abs(asteroids[i]))
                    {   isEqual=true;
                        stk1.pop();
                         break;
                    }
                    else
                    stk1.pop();
                }
                if(!isEqual && ( stk1.empty() || abs(stk1.top()) <= abs(asteroids[i]) || !willCrash(stk1.top(),asteroids[i])))
                stk1.push(asteroids[i]);

            }
        }

        int x;
        while(!stk1.empty())
        {
            x=stk1.top();
            stk1.pop();
            stk2.push(x);
        }

        asteroids.clear();
        while(!stk2.empty())
           { asteroids.push_back(stk2.top());
            stk2.pop();
          }
        
        return asteroids;

    }
};