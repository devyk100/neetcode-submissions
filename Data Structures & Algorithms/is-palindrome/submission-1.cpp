class Solution {
public:
    bool isValid(char c) {
        return ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
    }
    bool isPalindrome(string s) {
        int i = 0, j = s.length()-1;

        while(i < j) {
            if(!isValid(s[i])) {
                i++;
            } else if(!isValid(s[j])) {
                j--;
            } else {
                // if any of them in caps, convert to lower
                if(s[i] >= 'A' && s[i] <= 'Z') s[i] = 'a' + (s[i] - 'A');
                if(s[j] >= 'A' && s[j] <= 'Z') s[j] = 'a' + (s[j] - 'A');

                if(s[i] != s[j]) return false;

                i++;
                j--;
            }
        }
        
        return true;
    }
};
