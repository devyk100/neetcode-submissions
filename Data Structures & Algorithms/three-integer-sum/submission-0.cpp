class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        unordered_map<int, int> m;
        for(int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }

        vector<vector<int>> ans;

        for(int i = 0; i < nums.size(); i++) {
            if(i>0 && nums[i-1] == nums[i]) continue;
            m[nums[i]]--;
            for(int j = i+1; j < nums.size(); j++) {
                if(j>i+1 && nums[j-1] == nums[j]) continue;
                m[nums[j]]--;
                int target = -1 * (nums[i]+nums[j]);
                if(m[target] > 0) {
                    if((nums[i] <= nums[j] && nums[j] <= target))
                        ans.push_back({nums[i], nums[j], target});
                }
                m[nums[j]]++;
            }
            m[nums[i]]++;
            // for(int j = i+1; j < nums.size(); j++) {
            // }
        }

        return ans;
    }
};
