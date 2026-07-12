class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> arr(nums.size());
        for(int i = 0; i < nums.size(); i++) {
            arr[i].first = nums[i];
            arr[i].second = i;
        }
        sort(arr.begin(), arr.end());

         int i = 0, j = arr.size()-1;

        while(i < j) {
            if(arr[i].first+arr[j].first < target) {
                i++;
            } else if(arr[i].first+arr[j].first > target) {
                j--;
            } else {
                if(arr[i].second > arr[j].second) {
                    return {arr[j].second, arr[i].second};
                } else {
                    return {arr[i].second, arr[j].second};
                }
            }
        }
    }
};
