//url - https://leetcode.com/problems/palindrome-number/
// time complexity - O(n) , where n is the length of number

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        string tmp = to_string(x);
        x = tmp.size();
        for(int i=0;i<x/2;i++){
            if(tmp[i]!=tmp[x-i-1]) return false;
        }
        return true;
        
    }
};