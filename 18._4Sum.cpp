//url - 
//time complexity - O(n^3) , where n is the length of nums
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int i,j,k,l,r;
        vector<vector<int>> op;
        vector<int> tmp,t1;
        set<int> st;
        sort(nums.begin(),nums.end());
         if(nums.size()<4) return op;

        for(i=0;i<nums.size()-3;i++){
            for(j=i+1;j<nums.size()-2;j++){
                l=j+1;
                r=nums.size()-1;
                while(r>l){
                if((nums[i]+nums[j]+nums[l]+nums[r])==target){
                    t1.clear();
                    t1.push_back(nums[i]);
                    t1.push_back(nums[j]);
                    t1.push_back(nums[l]);
                    t1.push_back(nums[r]);
                    
                    if(find(op.begin(),op.end(),t1)==op.end()) op.push_back(t1);
                }
                    if((nums[i]+nums[j]+nums[l]+nums[r])>target) r--;
                    else l++;
            }
            }
        }
        return op;
        
    }
};