// Last updated: 3/7/2026, 4:15:37 PM
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
	vector<int>countPos(500001);
	vector<int>countNeg(500001);

	for (int i = 0; i < nums.size(); i++)
	{
		
		if (nums[i] >= 0)
			countPos[nums[i]]++;
		else
			countNeg[nums[i] * -1]++;
	}
	
	int idx = 0;
	for (int j = 50000; j >=0; j--)
	{
		
		while (countNeg[j]--)
		{
			nums[idx] = -1*j;
			idx++;
		}
	}

	for (int j = 0; j <= 50000; j++)
	{


		while (countPos[j]--)
		{
			nums[idx] = j;
			idx++;
		}
	}

	

	return nums;
    }
};