class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> m;

        for(int i = 0; i < strs.size(); i++) {
            vector<int> al(26, -1);
            for(int j = 0; j < strs[i].size(); j++) {
                al[strs[i][j]-'a']++;
            }
            string key = "";
            for(int j = 0; j < 26; j++) {
                key += to_string(al[j]);
            }
            m[key].push_back(strs[i]);
        }

        vector<vector<string>> ans;

        for(auto k: m) {
            ans.push_back(k.second);
        }

        return ans;
    }
};
