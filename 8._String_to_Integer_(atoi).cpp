// url - https://leetcode.com/problems/string-to-integer-atoi/submissions/
// time complexity - O(n) where n is the length of the string
class Solution {
public:
    int myAtoi(string s) {
        int i=0,j;
        string tmp;
        while(s[i]==' ') i++;
        while(s[i]=='0') i++;
        if(i>=1 && s[i-1]=='0' && s[i]=='-') return 0;
        if(s[i]=='-' or s[i]=='+') tmp.push_back(s[i++]);
        while(s[i]=='0') i++;
        if(s[i]>='0' && s[i]<='9'){
            while(s[i]>='0' && s[i]<='9'){
                tmp.push_back(s[i++]);
            }
            cout<<tmp<<"\n";
            if(tmp[0]=='-'){
                if(tmp.size()>11 || (tmp.size()==11 && tmp>"-2147483648")) return INT_MIN;
                else return stoi(tmp);
            }
            else{
                if(tmp.size()>11 || (tmp.size()==11 && tmp>"+2147483647")) return INT_MAX;
                if(tmp.size()==10 && tmp>"2147483647") return INT_MAX; 
                else return stoi(tmp);
            }
            
        }
        
        else return 0;
        
    }
};