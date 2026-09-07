// Last updated: 07/09/2026, 13:45:25
class Solution {
public:
    bool isNoZero(int n) {
        while (n > 0) {
            if (n % 10 == 0)
                return false;

            n /= 10;
        }

        return true;
    }

    vector<int> getNoZeroIntegers(int n) {
        for (int a = 1; a < n; a++) {
            int b = n - a;

            if (isNoZero(a) && isNoZero(b)) {
                return {a, b};
            }
        }

        return {};
    }
};
