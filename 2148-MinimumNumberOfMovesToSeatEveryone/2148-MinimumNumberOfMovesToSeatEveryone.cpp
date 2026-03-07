// Last updated: 3/7/2026, 4:11:47 PM
class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
            sort(seats.begin(),seats.end());
            sort(students.begin(),students.end());
            int res=0;
            for(int i=0;i<seats.size();i++)
                res+=abs(seats[i]-students[i]);
                return res;
    }
};