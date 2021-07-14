//url - https://leetcode.com/problems/longest-valid-parentheses/
//time complexity - O(n^2) , where n is the length of string
class Solution {
public:
    int longestValidParentheses(string s) {
        if(s.size()==0) return 0;
        vector<int> v;
        int i,j,tmp,op,n=s.size(),marker=0;
        if(s[0]=='(') v.push_back(1);
        else v.push_back(-1);
        for(i=1;i<n;i++){
            if(s[i]=='(') v.push_back(1);
            else{
                tmp=i-1;
                while(v[tmp]==0 && tmp>0) tmp--;
                if(v[tmp]==1) {
                    v[tmp]--;
                    v.push_back(0);
                }
                else v.push_back(-1);
            }
            
        }
        i=tmp=op=0;
        while(i<n){
            if(v[i]==0) tmp++;
            else{
                if(op<tmp) op=tmp;
                tmp=0;
            }
            i++;
        }
        if(tmp>op) op=tmp;
        return op;
    }
};