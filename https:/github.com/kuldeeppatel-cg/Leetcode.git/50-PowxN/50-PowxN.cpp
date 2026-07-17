// Last updated: 17/07/2026, 14:20:14
class Solution {
public:

    double solve(double x, long long n) {
        if (n == 0) {
            return 1;
        }

        double half = solve(x, n / 2);

        if (n % 2 == 0) {
            return half * half;
        }

        return half * half * x;
    }

    double myPow(double x, int n) {

        long long power = n;

        if (power < 0) {
            x = 1 / x;
            power = -power;
        }

        return solve(x, power);
    }
};