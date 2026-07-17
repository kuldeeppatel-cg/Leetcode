// Last updated: 17/07/2026, 14:18:28
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            ans.push_back(nums[nums[i]]);
        }
        return ans;
    }
};