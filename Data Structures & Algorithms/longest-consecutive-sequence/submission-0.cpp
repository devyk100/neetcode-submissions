class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> m;
        for(auto &t: nums) {
            m[t]++;
        }

        int maxLength = 0;

        for(auto &k: m) {
            if(m.count(k.first-1) == 0) {
                int l = 1;
                while(m.count(k.first+l)) {
                    m.erase(k.first+l);
                    l++;
                }
                maxLength = max(l, maxLength);
            }
        }

        return maxLength;
    }
};
