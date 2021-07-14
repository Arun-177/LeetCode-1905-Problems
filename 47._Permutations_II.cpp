//url - https://leetcode.com/problems/permutations-ii/
//time complexity - O((2n)C(n)) , where n is the length of the vector
class Solution {
public:
    vector<vector<int>> op;
    
    void get_combination(vector<int> tmp,vector<int>nums,int n){
        if(n==0){
            if(find(op.begin(),op.end(),tmp)==op.end())
            op.push_back(tmp);
            return ;
        }
        for(int i=0;i<n;i++){
            tmp.push_back(nums[i]);
            nums.erase(nums.begin()+i);
            get_combination(tmp,nums,n-1);
            nums.insert(nums.begin()+i,tmp.back());
            tmp.pop_back();
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        op.clear();
        vector<int> tmp,ttmp;
        int i,n=nums.size();
        
        for(i=0;i<n;i++){
            tmp.push_back(nums[i]);
            nums.erase(nums.begin()+i);
            get_combination(tmp,nums,n-1);
            nums.insert(nums.begin()+i,tmp[0]);
            tmp.clear();
        }
        
        return op;
    }
};