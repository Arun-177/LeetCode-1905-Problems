// url - https://leetcode.com/problems/longest-palindromic-substring/
// time complexity - O(n^2), where n is the length of string.


class Solution {
    int find_palindrome(string s,int i){
        int lft=i-1,rght=i+1;
        while(lft>=0 && rght<s.size()){
            if(s[lft]==s[rght]){
                lft--;
                rght++;
            }
            else break;
        }
        return 2*(rght-i-1)+1;
    }
    
    int find_another_palindrome(string s,int i){
        int lft=i,rght=i+1;
        while(lft>=0 && rght<s.size()){
            if(s[lft]==s[rght]){
                lft--;
                rght++;
            }
            else break;
        }
        return 2*(rght-i-1);
        
    }  
public:
    string longestPalindrome(string s) {
        int i,loc=0,len=0,tmp=0;
        string t;
        for(i=0;i<s.size();i++){
            tmp = find_palindrome(s,i);
            if(tmp>len){
                len=tmp;
                loc=i-(tmp-1)/2;
            }
            tmp = find_another_palindrome(s,i);
            if(tmp>len){
                len=tmp;
                loc = i-tmp/2+1;
            }
        }
        t = s.substr(loc,len);
        return t;
        
    }
};