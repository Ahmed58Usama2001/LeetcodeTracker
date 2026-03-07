// Last updated: 3/7/2026, 4:15:22 PM
class Solution {
public:
int largestSumAfterKNegations(vector<int> &nums, int k) {
		sort(nums.begin(), nums.end());
		int mn = INT_MAX, sum = 0;

		for (int i = 0; i < (int) nums.size(); i++) {
			if (k && nums[i] < 0)
				k -= 1, nums[i] *= -1;
			sum += nums[i];	// sum updated array
			mn = min(mn, nums[i]);
		}
		if (k % 2)	// Odd K: flip another number: the min
			sum -= 2 * mn;
		return sum;
	}
};