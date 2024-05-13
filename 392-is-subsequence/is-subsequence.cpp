class Solution {
public:
    bool isSubsequence(string s, string t) {
      if (s.length() > t.length()) return false;

        int subSequence=0;
      for(int i=0;i<t.length();i++)
      {
        if(s[subSequence]==t[i])
        subSequence++;
      }

      return subSequence==s.length();
    }
};