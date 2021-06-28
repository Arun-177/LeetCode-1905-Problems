// url - https://leetcode.com/problems/median-of-two-sorted-arrays/
// time complexity - O(log(m+n)), here m is the size of first vector and n is the size of second vector
class Solution {
    int find_kth(vector<int> nums1,int m,vector<int> nums2,int n, int k){
        if(m<=0) return nums2[k];
        if(n<=0) return nums1[k];
        if(nums2[n/2]>=nums1[m/2]){
            if(m/2+n/2>=k) return find_kth(nums1,m,nums2,n/2,k);
            nums1.erase(nums1.begin(),nums1.begin()+m/2+1);
            return find_kth(nums1,m-(m/2+1),nums2,n,k-(m/2+1));
        }
        else{
            if(m/2+n/2>=k) return find_kth(nums1,m/2,nums2,n,k);
            nums2.erase(nums2.begin(),nums2.begin()+n/2+1);
            return find_kth(nums1,m,nums2,n-(n/2+1),k-(n/2+1));
        }
    }
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(),n = nums2.size();
        int k = m+n;
        if(k%2) return find_kth(nums1,m,nums2,n,k/2);
        else return (find_kth(nums1,m,nums2,n,k/2) + find_kth(nums1,m,nums2,n,(k-1)/2))/2.0;
                
    }
};