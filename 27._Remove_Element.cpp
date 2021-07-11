//url - https://leetcode.com/problems/remove-element/
//time complexity - O(k*n) , where k is the number of occurance of variable and n is the length of nums
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        while(find(nums.begin(),nums.end(),val)!=nums.end())    nums.erase(find(nums.begin(),nums.end(),val));
        return nums.size();
    }
};