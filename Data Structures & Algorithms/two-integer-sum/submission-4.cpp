class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> valToInd;
        valToInd[nums[0]] = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(valToInd.find(target - nums[i]) != valToInd.end()) {
                return {valToInd[target - nums[i]], i};
            }
            valToInd[nums[i]] = i;
        }
        return {0};
    }
};
