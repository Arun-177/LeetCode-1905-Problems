//url - https://leetcode.com/problems/3sum-closest/
//time complexity - O(n^2) , where n is the length of nums
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int i,l,r,j,n=nums.size(),min_sum=INT_MAX-4000,tmp;
        
        sort(nums.begin(),nums.end());
        
        for(i=0;i<n-2;i++){
            l=i+1;
            r=n-1;
            while(r>l){
                if(abs(nums[i]+nums[l]+nums[r]-target)<abs(min_sum-target)) min_sum = nums[i]+nums[l]+nums[r];
                if((nums[i]+nums[l]+nums[r])>target) r--;
                else if((nums[i]+nums[l]+nums[r])<target) l++;
                else return target;
            }
        }
        return min_sum;
        
    }
};