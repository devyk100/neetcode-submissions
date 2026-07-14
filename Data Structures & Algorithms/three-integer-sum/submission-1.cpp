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
            m[nums[i]]--;
            if(i>0 && nums[i-1] == nums[i]) continue;
            for(int j = i+1; j < nums.size(); j++) {
                m[nums[j]]--;
                if(j>i+1 && nums[j-1] == nums[j]) continue;
                int target = -1 * (nums[i]+nums[j]);
                if(m[target] > 0) {
                    ans.push_back({nums[i], nums[j], target});
                }
            }
            for(int j = i+1; j < nums.size(); j++) {
                m[nums[j]]++;
            }
        }

        return ans;
    }
};
