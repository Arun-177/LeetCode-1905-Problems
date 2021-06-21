class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> op,sec = nums;
        sort(nums.begin(),nums.end());
        int lft=0,rght=nums.size()-1;
        for(auto i:sec) cout<<i<<" ";
        cout<<"\n";
        
        while(true){
            if(nums[lft]+nums[rght]==target){
                if(nums[lft]!=nums[rght]){
                    op.push_back(find(sec.begin(),sec.end(),nums[lft])-sec.begin());
                    op.push_back(find(sec.begin(),sec.end(),nums[rght])-sec.begin());
                    cout<<nums[rght]<<" "<<find(sec.begin(),sec.end(),nums[rght])-sec.begin();
                    return op;
                }
                else{
                    op.push_back(find(sec.begin(),sec.end(),nums[lft])-sec.begin());
                    op.push_back(find(sec.begin()+op[0]+1,sec.end(),nums[lft])-sec.begin());
                    return op;
                }
            }
            else if(nums[lft]+nums[rght]>target) rght--;
            else lft++;
        }
        
    }
};