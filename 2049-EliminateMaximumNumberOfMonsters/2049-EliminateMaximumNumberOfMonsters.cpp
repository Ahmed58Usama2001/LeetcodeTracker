// Last updated: 3/7/2026, 4:11:50 PM
class Solution {
public:
int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
	vector<int>times(dist.size());
	int counter = 0;

	for (int i = 0; i < dist.size(); i++)
	{
		if (dist[i] % speed[i]==0)
			times[i]=dist[i] / speed[i];

      else
      times[i]=(dist[i] / speed[i])+1;

	}
		
sort(times.begin(),times.end());

	for (int i =0; i < times.size(); i++)
	{
		if (times[i] <= i )
      break;

		else
			counter++;
	}

	return counter;


    }
};