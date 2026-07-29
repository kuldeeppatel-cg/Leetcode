// Last updated: 29/07/2026, 13:09:05
class Solution {
public:
    int finalElement(vector<int>& nums) {
        return max(nums[0],nums[nums.size()-1]);
    }
};