// Last updated: 12/08/2026, 14:03:28
class Solution {
public:
    int modPow(long long a, int b) {
        long long result = 1;

        a %= 1337;

        while (b > 0) {
            if (b % 2 == 1) {
                result = (result * a) % 1337;
            }

            a = (a * a) % 1337;
            b /= 2;
        }

        return result;
    }

    int superPow(int a, vector<int>& b) {
        long long result = 1;

        for (int digit : b) {
            result = (modPow(result, 10) * modPow(a, digit)) % 1337;
        }

        return result;
    }
};