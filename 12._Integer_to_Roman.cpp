// url - https://leetcode.com/problems/integer-to-roman/
// time complexity - O(n)
class Solution {
public:
    string intToRoman(int num) {
        string op;
        int nm[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int i=12;   
        while(num>0)
        {
          int div = num/nm[i];
          num = num%nm[i];
          while(div--) op+=sym[i];
          i--;
        }
        return op;
    }
};