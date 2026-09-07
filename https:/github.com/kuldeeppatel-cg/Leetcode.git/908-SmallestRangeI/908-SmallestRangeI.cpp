// Last updated: 07/09/2026, 13:46:57
class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mn = nums[0];
        int mx = nums[0];

        for (int num : nums) {
            mn = min(mn, num);
            mx = max(mx, num);
        }

        int range = mx - mn;

        if (range <= 2 * k)
            return 0;

        return range - 2 * k;
    }
};