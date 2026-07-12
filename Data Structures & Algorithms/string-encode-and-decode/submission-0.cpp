class Solution {
public:

    string encode(vector<string>& strs) {
        string size = std::to_string(strs.size());
        string encodedString = size;
        encodedString += '\n';
        for(int i = 0; i < strs.size(); i++){
            encodedString += std::to_string(strs[i].length());
            encodedString += '\n';
            encodedString += strs[i];
        }
        return encodedString;
    }

    vector<string> decode(string s) {
        string size_s = "";
        int i = 0;
        for(;i < s.length(); i++) {
            if(s[i] == '\n') {
                i++;
                break;
            }
            size_s += s[i];
        }
        int size = stoi(size_s);
        vector<string> ans;
        for(int j = 0; j < size; j++) {
            string size_s = "", temp = "";
            for(;i < s.length(); i++) {
                if(s[i] == '\n') {
                    i++;
                    break;
                }
                size_s += s[i];
            }
            int size = stoi(size_s);
            int old_i = i;
            for(;i < old_i + size; i++) {
                temp += s[i];
            }
            ans.push_back(temp);
        }

        return ans;
    }
};
