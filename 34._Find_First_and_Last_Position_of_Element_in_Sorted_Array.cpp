//url - https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/
//time complexity - O(n) , where n is the length of nums
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v,op;
        if(find(nums.begin(),nums.end(),target)==nums.end()){
            v.push_back(-1);
            v.push_back(-1);
            return v;
        }
        v.push_back(find(nums.begin(),nums.end(),target)-nums.begin());
        while(true){
            auto i = find(nums.begin()+v.back()+1,nums.end(),target);
            if(i!=nums.end()) v.push_back(i-nums.begin());
            else break;
        }
        for(auto i:v) cout<<i<<" ";
        op.push_back(v[0]);
        op.push_back(v.back());        
        return op;
        
    }
};