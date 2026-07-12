class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> m;

        for(int i = 0; i < strs.size(); i++) {
            vector<int> al(26, 0);
            for(int j = 0; j < strs[i].size(); j++) {
                al[strs[i][j]-'a']++;
            }
            m[al].push_back(strs[i]);
        }

        vector<vector<string>> ans;

        for(auto k: m) {
            ans.push_back(k.second);
        }

        return ans;
    }
};
