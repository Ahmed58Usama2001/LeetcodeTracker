class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
        int n=height.size();
        vector<int>leftMax(n),rightMax(n);

        for(int i=1;i<n;i++)
        leftMax[i]=max(leftMax[i-1],height[i-1]);

        for(int i=n-2;i>=0;i--)
        rightMax[i]=max(rightMax[i+1],height[i+1]);

        int waterLevel;
        for(int i=0;i<n;i++)
        {
            waterLevel=min(leftMax[i],rightMax[i]);
            if(waterLevel>=height[i])
            ans+=waterLevel-height[i];
        }

        return ans;
    }
};