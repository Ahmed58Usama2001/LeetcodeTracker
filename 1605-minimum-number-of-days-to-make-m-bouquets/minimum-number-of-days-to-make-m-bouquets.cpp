class Solution {
public:
int possible(vector<int>& bloomDay, int k,int day,int m)
{int adj_flowers = 0, bouquets = 0;
for (int i = 0; i < (int) bloomDay.size(); ++i) {
			if (bloomDay[i] <=day) {
				++adj_flowers;

				if (adj_flowers >= k)
					adj_flowers = 0, ++bouquets;	

				if (bouquets == m)	
					return true;
			} else
				adj_flowers = 0;
		}
		return false;
}

    int minDays(vector<int>& bloomDay, int m, int k) {
        int left=1,right=*max_element(bloomDay.begin(),bloomDay.end()),ans=-1;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(possible(bloomDay,k,mid,m))
            ans=mid,right=mid-1;
            else
            left=mid+1;
        }
        return ans;
    }
};