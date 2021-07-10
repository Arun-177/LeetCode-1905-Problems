//url - https://leetcode.com/problems/longest-common-prefix/
//time complexity - O(n*m) , here n is the length of strs and m is the length of first string in strs
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        int tmp,i,j,n = strs.size(),nn;
        string op = strs[0];
        
        for(i=1;i<n;i++){
            nn=min(op.size(),strs[i].size());
            tmp=0;
            for(j=0;j<nn;j++){
                if(strs[i][j]!=op[j]) break;
            }
            op = strs[0].substr(0,j);
        }
        return op;
        
        
    }
};