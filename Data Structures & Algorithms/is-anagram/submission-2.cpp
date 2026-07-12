class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> sMap, tMap;
        if(s.length() != t.length()) return false;
        for(int i = 0; i < s.length(); i++) {
            sMap[s[i]]++;
            tMap[t[i]]++;
        }
        return sMap == tMap;
    }
};
