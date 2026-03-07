// Last updated: 3/7/2026, 4:11:52 PM
class Solution {
public:
    int reductionOperations(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	int res=0, total = 0, prev = 0, minimum = nums[0];
	for (int i = nums.size() - 1; i > 0 && nums[i] > minimum; i--)
	{
		
		int curfreq = 1;
		while (nums[i] == nums[i - 1])
		{
			curfreq++;
			i--;
		}
		total =curfreq + prev;
		prev = total;
		res += total;
		
	}
	
	return res;
}
};