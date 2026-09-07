// Last updated: 07/09/2026, 13:45:44
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