// url - https://leetcode.com/problems/roman-to-integer/
// time complexity - O(n), where n is the length of string
class Solution {
public:
    int romanToInt(string s) {
        int n=0,i=0,lngth=s.size();
        vector<char> v={'I','V','X','L','C','D','M'};
        vector<int> vv = {1,5,10,50,100,500,1000};
        while(i<lngth){
            if((i+1<lngth) && (find(v.begin(),v.end(),s[i])<find(v.begin(),v.end(),s[i+1]))){
                n+=vv[find(v.begin(),v.end(),s[i+1])-v.begin()] - vv[find(v.begin(),v.end(),s[i])-v.begin()];
                i+=2;
            }
            else n+=vv[find(v.begin(),v.end(),s[i++])-v.begin()];
        }       
        return n;
    }
};