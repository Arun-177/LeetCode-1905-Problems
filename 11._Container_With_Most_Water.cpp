//url - https://leetcode.com/problems/container-with-most-water/
// time complexity - O(n), where n is the length of vector
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1,max_area=0;
        while(r>l){
            max_area = max(max_area,(r-l)*min(height[l],height[r]));
            if(height[l]>height[r]) r--;
            else l++;   
        }
        return max_area;
    }
};