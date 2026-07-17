// Last updated: 17/07/2026, 14:19:08
class Solution {
public:
    int balancedStringSplit(string s) {
        int R = 0, L = 0;
        int result = 0;

        for (char ch : s) {
            if (ch == 'R') {
                R++;
            } else if (ch == 'L') {
                L++;
            }
             if (L == R && L != 0 && R != 0) {
                result++;
                L = 0;
                R = 0;
            }
        }
        return result;
    }
};