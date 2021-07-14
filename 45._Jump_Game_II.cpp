//url - https://leetcode.com/problems/jump-game-ii/
//time complexity - O(sum of elements present in nums)
class Solution {
public:
    int jump(vector<int>& nums) {
        
        vector<int> op;
        int i,j,n = nums.size();
        op.push_back(0);
        for(i=1;i<n;i++) op.push_back(INT_MAX);
        for(i=0;i<n-1;i++){
            for(j=1;j<=nums[i];j++){
                if((i+j<n) && (op[i+j]>op[i]+1)) op[i+j]=op[i]+1;
            }
        }
        return op.back();
        
    }
};