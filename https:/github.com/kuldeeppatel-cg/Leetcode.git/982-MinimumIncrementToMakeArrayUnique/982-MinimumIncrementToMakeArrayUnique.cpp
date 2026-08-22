// Last updated: 22/08/2026, 23:39:43
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int ans = 0;
        int prev = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] <= prev) {
                int needed = prev + 1 - nums[i];

                ans += needed;
                nums[i] = prev + 1;
            }

            prev = nums[i];
        }

        return ans;
    }
};