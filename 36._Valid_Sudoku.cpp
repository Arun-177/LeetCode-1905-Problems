//url - https://leetcode.com/problems/valid-sudoku/submissions/
//time complexity - constant , just checking all 27 possible combination 
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<char> tmp;
        set<char> st;
        int i,j,k,ii,jj;
        for(i=0;i<9;i++){
            tmp.clear();
            st.clear();
            for(j=0;j<9;j++)
                if(board[i][j]!='.') tmp.push_back(board[i][j]);
            for(auto k:tmp) st.insert(k);
            if(st.size()!=tmp.size()) return false;
            
            tmp.clear();
            st.clear();
            for(j=0;j<9;j++)
                if(board[j][i]!='.') tmp.push_back(board[j][i]);
            for(auto k:tmp) st.insert(k);
            if(st.size()!=tmp.size()) return false;
        }
        for(i=0;i<9;i+=3){
            for(j=0;j<9;j+=3){
                tmp.clear();
                st.clear();
                for(ii=0;ii<3;ii++){
                    for(jj=0;jj<3;jj++)
                        if(board[i+ii][j+jj]!='.') tmp.push_back(board[i+ii][j+jj]);
                    
                    for(auto k:tmp) st.insert(k);
                     if(st.size()!=tmp.size()) return false;
                    
                }
            }   
        }
        return true;
    }
};