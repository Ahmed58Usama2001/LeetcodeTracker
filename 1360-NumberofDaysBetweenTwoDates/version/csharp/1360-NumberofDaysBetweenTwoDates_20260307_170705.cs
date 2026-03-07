// Last updated: 3/7/2026, 5:07:05 PM
1public class Solution {
2    public int DaysBetweenDates(string date1, string date2) {
3        DateTime d1 = DateTime.Parse(date1);
4        DateTime d2 = DateTime.Parse(date2);
5
6        return Math.Abs((d2-d1).Days);
7    }
8}