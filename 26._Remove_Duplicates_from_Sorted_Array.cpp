//url - https://leetcode.com/problems/remove-duplicates-from-sorted-array/
//time compleixity - O(n) , where n is the length of array
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        int i=0;
        for(auto ii:nums) s.insert(ii);
        for(auto k:s) nums[i++]=k;
        return s.size();
    }
};