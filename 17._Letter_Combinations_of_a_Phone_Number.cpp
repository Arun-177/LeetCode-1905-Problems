//url - https://leetcode.com/problems/letter-combinations-of-a-phone-number/
//time complexity - O(n) , where n is the length of digits
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> op,tmp;
        int i=0;
        if(digits.size()==0) return op;
        switch(digits[i]){
            case '2':
                tmp.push_back("a");
                tmp.push_back("b");
                tmp.push_back("c");
                break;
            case '3':
                tmp.push_back("d");
                tmp.push_back("e");
                tmp.push_back("f");
                break;
            case '4':
                tmp.push_back("g");
                tmp.push_back("h");
                tmp.push_back("i");
                break;
            case '5':
                tmp.push_back("j");
                tmp.push_back("k");
                tmp.push_back("l");
                break;
            case '6':
                tmp.push_back("m");
                tmp.push_back("n");
                tmp.push_back("o");
                break;
            case '7':
                tmp.push_back("p");
                tmp.push_back("q");
                tmp.push_back("r");
                tmp.push_back("s");
                break;
            case '8':
                tmp.push_back("t");
                tmp.push_back("u");
                tmp.push_back("v");
                break;
            case '9':
                tmp.push_back("w");
                tmp.push_back("x");
                tmp.push_back("y");
                tmp.push_back("z");
                break;
        }
        op = tmp;

        for(i=1;i<digits.size();i++){
            tmp = op;
            op.clear();
            switch(digits[i]){
                case '2':
                    for(auto z:tmp) op.push_back(z+="a");
                    for(auto z:tmp) op.push_back(z+="b");
                    for(auto z:tmp) op.push_back(z+="c");
                    break;
                case '3':
                    for(auto z:tmp) op.push_back(z+="d");
                    for(auto z:tmp) op.push_back(z+="e");
                    for(auto z:tmp) op.push_back(z+="f");
                    break;
                case '4':
                    for(auto z:tmp) op.push_back(z+="g");
                    for(auto z:tmp) op.push_back(z+="h");
                    for(auto z:tmp) op.push_back(z+="i");
                    break;
                case '5':
                    for(auto z:tmp) op.push_back(z+="j");
                    for(auto z:tmp) op.push_back(z+="k");
                    for(auto z:tmp) op.push_back(z+="l");
                    break;
                case '6':
                    for(auto z:tmp) op.push_back(z+="m");
                    for(auto z:tmp) op.push_back(z+="n");
                    for(auto z:tmp) op.push_back(z+="o");
                    break;
                case '7':
                    for(auto z:tmp) op.push_back(z+="p");
                    for(auto z:tmp) op.push_back(z+="q");
                    for(auto z:tmp) op.push_back(z+="r");
                    for(auto z:tmp) op.push_back(z+="s");
                    break;
                case '8':
                    for(auto z:tmp) op.push_back(z+="t");
                    for(auto z:tmp) op.push_back(z+="u");
                    for(auto z:tmp) op.push_back(z+="v");
                    break;
                case '9':
                    for(auto z:tmp) op.push_back(z+="w");
                    for(auto z:tmp) op.push_back(z+="x");
                    for(auto z:tmp) op.push_back(z+="y");
                    for(auto z:tmp) op.push_back(z+="z");
                    break;
            }   
        }
        return op;      
    }
};