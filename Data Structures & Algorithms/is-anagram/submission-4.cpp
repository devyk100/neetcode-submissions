class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> sMap(26, 0), tMap(26, 0);
        if(s.length() != t.length()) return false;
        for(int i = 0; i < s.length(); i++) {
            sMap[s[i] - 'a']++;
            tMap[t[i] - 'a']++;
        }
        return sMap == tMap;
    }
};
