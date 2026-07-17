// Last updated: 17/07/2026, 14:19:55
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        //  [0,1,2,4,5,7]
        if (nums.empty())
            return result;

        int start = nums[0]; // start = 7;

        for (int i = 1; i <= nums.size(); i++) {

            if (i == nums.size() ||
                nums[i] !=
                    nums[i - 1] + 1) { //  != 6      result = {"0->2" , "4->5"}

                if (start == nums[i - 1]) { // 7 = 3
                    result.push_back(to_string(start));
                } else {
                    result.push_back(to_string(start) + "->" +
                                     to_string(nums[i - 1]));
                }

                if (i < nums.size())
                    start = nums[i];
            }
        }

        return result;
    }
};