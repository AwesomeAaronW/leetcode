//leetcode contest
//Given a string s and a string t, check if s is subsequence of t.

// You may assume that there is only lower case English letters in both s and t. t is potentially a very long (length ~= 500,000) string, and s is a short string (<=100).

// A subsequence of a string is a new string which is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (ie, "ace" is a subsequence of "abcde" while "aec" is not).

// Example 1:
// s = "abc", t = "ahbgdc"

// Return true.

// Example 2:
// s = "axc", t = "ahbgdc"

// Return false.
class Solution {
public:
    bool isSubsequence(string s, string t) {
        return help(s,t,0,0);
    }
    bool help(string s, string t, long snum, long tnum){
        long slen=s.size();
        long tlen=t.size();
        if(snum>=slen) return true;
        if(tnum>=tlen) return false;
        for(long i=tnum;i<tlen;i++){
            if(s[snum]==t[i]){
                if(snum==slen-1) return true;
                snum++;
            }
        }
        return false;
    }
};
