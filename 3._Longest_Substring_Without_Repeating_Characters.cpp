// url - https://leetcode.com/problems/longest-substring-without-repeating-characters/
//time complexity - O(n), here n is length of string
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int op=0,i=0,j;
        vector<int> lastseen(256,-1);
        for(j=0;j<s.size();j++){
            i = max(i,lastseen[s[j]]+1);
            op = max(op,j-i+1);
            lastseen[s[j]]=j;
        }
        return op;
        
        
    }
};