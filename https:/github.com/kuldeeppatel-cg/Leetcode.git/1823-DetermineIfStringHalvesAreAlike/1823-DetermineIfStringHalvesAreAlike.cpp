// Last updated: 17/07/2026, 14:18:45
class Solution {
public:
    bool halvesAreAlike(string s) {
        int size = s.length();
        int even = 0;
        int halfEven = 0;
        for (int i = 0; i < size; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                s[i] == 'O' || s[i] == 'U') {
                if ((size + 1) / 2 > i) {
                    even++;
                } else {
                    halfEven++;
                }
            }
        }
        return (even == halfEven) ? true : false;
    }
};