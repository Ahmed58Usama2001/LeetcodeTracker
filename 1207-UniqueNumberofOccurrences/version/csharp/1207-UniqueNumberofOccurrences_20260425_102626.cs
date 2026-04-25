// Last updated: 4/25/2026, 10:26:26 AM
public class Solution {
    public bool UniqueOccurrences(int[] arr) {
        var map = new Dictionary<int,int>();
        foreach(int n in arr){
            if(map.ContainsKey(n)){
                map[n]++;
            }else{
                map.Add(n,1);
            }
        }
        foreach(var (num, occurrence) in map){
            map.Remove(num);
            if(map.ContainsValue(occurrence)) return false;
        }
        return true;
    }
}