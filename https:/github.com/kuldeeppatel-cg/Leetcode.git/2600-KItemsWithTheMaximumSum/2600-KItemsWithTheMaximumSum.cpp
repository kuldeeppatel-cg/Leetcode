// Last updated: 07/09/2026, 13:42:24
class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros,
                             int numNegOnes, int k) {
        
        int ans = 0;

        // Take 1s first
        int take = min(k, numOnes);
        ans += take;
        k -= take;

        // Take 0s
        take = min(k, numZeros);
        k -= take;

        // Take -1s
        ans -= k;

        return ans;
    }
};