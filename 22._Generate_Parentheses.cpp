//url - https://leetcode.com/problems/generate-parentheses/
//time complexity - O(2^n) where n is the input number
class Solution {
public:
    vector<string> op;
    
    void generate_op(string tmp,int conter,int n){
        if(n==0){
            while(conter!=0){
                tmp+=")";
                conter--;
            }
            if(find(op.begin(),op.end(),tmp)==op.end()) op.push_back(tmp);
        }
        else{
            tmp+="(";
            conter++;
            generate_op(tmp,conter,n-1);
            while(conter){
            tmp+=")";
            conter--;
            generate_op(tmp,conter,n-1);
            }
        }
    }
    
    vector<string> generateParenthesis(int n) {
        string tmp;
        op.clear();
        int conter=0;
        tmp+="(";
        conter++;
        generate_op(tmp,conter,n-1);
        tmp+=")";
        conter--;
        generate_op(tmp,conter,n-1);
        
        return op;
    }
};