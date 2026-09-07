// Last updated: 07/09/2026, 13:41:54
class Solution {
public:
    int finalElement(vector<int>& nums) {
        return max(nums[0],nums[nums.size()-1]);
    }
};