class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int ans=0,n=heights.size();
        stack<int>s;

        for(int i=0;i<=n;i++)
        {
            int curHeight=i==n?0:heights[i];

            while(!s.empty() && curHeight<heights[s.top()])
            {int top=s.top();
            s.pop();

            int width=s.empty()?i:i-s.top()-1;
            int area=width*heights[top];
                ans=max(ans,area);
            }

            s.push(i);
        }
        return ans;
    }
};