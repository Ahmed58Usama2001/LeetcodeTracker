// Last updated: 3/7/2026, 5:11:44 PM
public class Solution {
    public int DaysBetweenDates(string date1, string date2) {
        DateTime d1 = DateTime.Parse(date1);
        DateTime d2 = DateTime.Parse(date2);

        return Math.Abs((d2-d1).Days);
    }
}