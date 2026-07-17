// Last updated: 17/07/2026, 14:20:33
class Solution {
public:
    int myAtoi(string s) {

        int state = 0; // 0-space 1-sign 2-number
        long long ans = 0;
        int sign = 1;

        for (char ch : s) {

            if (state == 0) {

                if (ch == ' ')
                    continue;

                else if (ch == '+' || ch == '-') {
                    sign = (ch == '-') ? -1 : 1;
                    state = 1;
                }

                else if (isdigit(ch)) {
                    ans = ch - '0';
                    state = 2;
                }

                else
                    break;
            }

            else {

                if (!isdigit(ch))
                    break;

                if (ans > (INT_MAX - (ch - '0')) / 10)
                    return sign == 1 ? INT_MAX : INT_MIN;

                ans = ans * 10 + (ch - '0');
            }
        }

        return sign * ans;
    }
};