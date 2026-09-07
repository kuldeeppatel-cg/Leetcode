// Last updated: 07/09/2026, 13:44:06
class Solution {
public:
    int minOperations(vector<int>& nums) {     // nums = [1,2,3,4,5]
        int operations = 0;
                                                    // i = 4
        for (int i = 1; i < nums.size(); i++) {      //  nums[i] = 1 <= num[i-1] = 4
            if (nums[i] <= nums[i - 1]) {
                int needed = nums[i - 1] + 1 - nums[i];     // needed = 4 + 1 - 1 = 4
                operations += needed;                      //  operation = 2
                nums[i] += needed;                        //   num[i] = 5
            }
        }

        return operations;
    }
};