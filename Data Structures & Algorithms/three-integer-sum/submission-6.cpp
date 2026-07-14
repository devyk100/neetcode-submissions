class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;

        for(int i = 0; i < nums.size(); i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int j = i+1, k = nums.size()-1;

            while(j < k) {
                int target = -(nums[i]);
                if(k < nums.size()-1 && nums[k] == nums[k+1]) {
                    k--;
                    continue;
                }
                if((j > i+1) && (nums[j] == nums[j-1])) {
                    j++;
                    continue;
                }
                if(target > (nums[j] + nums[k])) {
                    j++;
                } else if(target < (nums[j] + nums[k])) {
                    k--;
                } else {
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    // the most important thing, as for each i there's no one shot answer, we find more by further processing by j++ and k--
                }
            }
        }

        return ans;
    }
};
