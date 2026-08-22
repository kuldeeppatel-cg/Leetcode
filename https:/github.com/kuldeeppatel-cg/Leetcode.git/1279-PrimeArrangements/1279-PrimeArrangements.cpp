// Last updated: 22/08/2026, 23:39:14
class Solution {
public:
    int numPrimeArrangements(int n) {
        const long long MOD = 1000000007;

        int primes = 0;

        for (int i = 2; i <= n; i++) {
            bool prime = true;

            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    prime = false;
                    break;
                }
            }

            if (prime)
                primes++;
        }

        int nonPrimes = n - primes;

        long long ans = 1;

        for (int i = 2; i <= primes; i++) {
            ans = (ans * i) % MOD;
        }

        for (int i = 2; i <= nonPrimes; i++) {
            ans = (ans * i) % MOD;
        }

        return ans;
    }
};