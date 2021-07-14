//url - https://leetcode.com/problems/rotate-image/submissions/
//time complexity - O(n^2) , where n is the length of  the matrix
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int i,j,tmp;
        for(i=0;i<n/2+n%2;i++){
            for(j=0;j<n/2;j++){
                tmp = matrix[n-1-j][i];
                matrix[n-1-j][i] = matrix[n-1-i][n-j-1];
                matrix[n-1-i][n-j-1] = matrix[j][n-1-i];
                matrix[j][n-1-i] = matrix[i][j];
                matrix[i][j]=tmp;
            }
        }
        
    }
};