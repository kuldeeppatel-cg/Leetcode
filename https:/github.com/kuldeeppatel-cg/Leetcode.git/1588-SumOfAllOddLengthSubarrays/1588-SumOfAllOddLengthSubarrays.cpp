// Last updated: 07/09/2026, 13:44:42
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            // Number of subarrays containing arr[i]
            int total = (i + 1) * (n - i);

            // Number of odd-length subarrays containing arr[i]
            int odd = (total + 1) / 2;

            ans += arr[i] * odd;
        }

        return ans;
    }
};
