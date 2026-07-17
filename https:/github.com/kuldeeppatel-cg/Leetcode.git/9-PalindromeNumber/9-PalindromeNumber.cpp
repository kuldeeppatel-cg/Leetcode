// Last updated: 17/07/2026, 14:20:34
class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        if(x < 0){
            return false;
        }
        int i = 0;
        int j = s.length() - 1;
        while (j > i) {
            if (s[i] == s[j]) {
                i++;
                j--;
            } else {
                return false;
            }
        }
        return true;
    }
};