// Last updated: 07/09/2026, 13:43:41
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