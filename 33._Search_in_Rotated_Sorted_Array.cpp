//url - https://leetcode.com/problems/search-in-rotated-sorted-array/
//time complexity - O(n) , where n is the length of nums
class Solution {
public:
    int search(vector<int>& nums, int target) {
        vector<int> v;
        auto i = find(nums.begin(),nums.end(),target);
        if(i==nums.end()) return -1;
        else return i-nums.begin();
        
    }
};