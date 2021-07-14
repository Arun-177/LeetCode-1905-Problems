//url - https://leetcode.com/problems/implement-strstr/
//time complexity - O(n) , where n is the length of haystack
class Solution {
public:
    int strStr(string haystack, string needle) {
        int m =haystack.size(),n= needle.size();
        if(n==0) return 0;
        if(n>m) return -1;
        for(int i=0;i<m-n+1;i++){
            if(string(haystack.begin()+i,haystack.begin()+i+n)==needle) return i;
        }
        return -1;
        
    }
};