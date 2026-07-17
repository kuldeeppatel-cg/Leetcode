// Last updated: 17/07/2026, 14:20:35
class Solution {
public:
    int reverse(int x) {
        vector<int> digits;
        long long num = x;

        bool neg = false;

        if (num < 0) {
            neg = true;
            num = -num;
        }
        while (num > 0) {
            digits.push_back(num % 10);
            num /= 10;
        }
        long long ans = 0;
        for (int i = 0; i < digits.size(); i++) {
            if (ans > (INT_MAX - digits[i]) / 10) {
                return 0;
            }
            ans = ans * 10 + digits[i];
        }
        if (neg) ans = -ans;
        if (ans > INT_MAX || ans < INT_MIN) {
            return 0;
        }

        return (int)ans;
    }
};