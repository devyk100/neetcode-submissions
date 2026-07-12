class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroCount = 0;
        long productWithoutZero = 1;
        int zeroIndex = -1;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                productWithoutZero *= nums[i];
            } else {
                zeroIndex = i;
                zeroCount++;
            }
        }

        vector<int> ans(nums.size(), 0);

        if(zeroCount == 0) {
            for(int i = 0; i < ans.size(); i++) {
                ans[i] = productWithoutZero/nums[i];
            }
        } else if(zeroCount == 1) {
            ans[zeroIndex] = productWithoutZero;
        }

        return ans;
    }
};
