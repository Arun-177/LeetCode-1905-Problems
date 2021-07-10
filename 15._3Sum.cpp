//url - https://leetcode.com/problems/3sum/
//time complexity - O(n^2) , where n is the length of given vector

class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		int sz = nums.size();
		vector<vector<int>> res;
		sort(nums.begin(), nums.end());
		for (int i = 0; i < sz - 2; i++) {
			if (i > 0 && nums[i - 1] >= 0) break;
			while (i > 0 && nums[i] == nums[i - 1]) i++;
			for (int k = sz - 1; k > i + 1; k--) {
				while (k > i + 2 && nums[k] == nums[k - 2]) k--;
				 if (nums[i] + 2 * nums[k] < 0) break;
				 if (nums[i] * 2 + nums[k] > 0) continue;
				int l = i, r = k;
				while (l < r) {
					int j = (l + r) / 2;
					if (j == l || j == r) break;
					int tmp = nums[i] + nums[j] + nums[k];
 
					if (tmp == 0) {
						res.push_back({ nums[i] , nums[j] , nums[k] });
 
						if (nums[k] == nums[k - 1])
							k--;
						break;
					}
					else if (tmp > 0) r = j;
					else l = j;
				}
			}
		}
		return res;
	}
};
