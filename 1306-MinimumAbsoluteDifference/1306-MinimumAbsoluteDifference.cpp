// Last updated: 3/7/2026, 4:15:09 PM
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
   	vector<vector<int>>res;
	sort(arr.begin(), arr.end());
	int min_diff = INT_MAX;
	for (int i = 1; i < arr.size(); i++)
	{
		if (arr[i] - arr[i - 1] < min_diff)
		{
			min_diff = arr[i] - arr[i - 1];
			res.clear();
			res.push_back({arr[i - 1], arr[i]});
		}
		else if (arr[i] - arr[i - 1] == min_diff) {
			res.push_back({ arr[i - 1], arr[i] });
		}
	}

	return res;
    }
};