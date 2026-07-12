class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for(auto &t: nums) {
            m[t]++;
        }

        vector<pair<int, int>> s;
        for(auto &k: m) {
            s.push_back({k.second, k.first});
        }

        sort(s.begin(), s.end());
        vector<int> ans(k);
        for(int i = 0; i < k; i++) {
            ans[i] = s[s.size() - 1 - i].second;
        }

        return ans;
    }
};
