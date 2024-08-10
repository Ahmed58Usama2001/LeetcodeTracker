class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
        stack<int>s;

        for(int r=0;r<height.size();r++)
        {
            while(!s.empty() && height[r]>height[s.top()])
            {
                int m=s.top();
                s.pop();

                if(s.empty())
                break;

                int l=s.top();
                int h=min(height[r]-height[m],height[l]-height[m]);
                int w=r-l-1;

                ans+=w*h;
            }

            s.push(r);
        }

        return ans;
    }
};