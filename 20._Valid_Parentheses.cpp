//url - https://leetcode.com/problems/valid-parentheses/
//time complexity - O(n) , where n is the length of string
class Solution {
public:
    bool isValid(string s) {
        stack<char> tmp;
        for(int i=0;i<s.size();i++){
            if(s[i]=='[' || s[i]=='(' || s[i]=='{') tmp.push(s[i]);
            else if(tmp.size()!=0 &&((s[i]=='}' && tmp.top()=='{') || (s[i]==')' && tmp.top()=='(') || (s[i]==']' && tmp.top()=='['))) tmp.pop();
            else return false;
        }
        if(tmp.size()) return false;
        else return true;
        
    }
};