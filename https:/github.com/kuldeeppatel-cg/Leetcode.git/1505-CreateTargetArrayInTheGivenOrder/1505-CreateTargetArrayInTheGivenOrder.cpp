// Last updated: 17/07/2026, 14:19:00
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> result;
        for(int i=0; i<nums.size(); i++){
            result.insert(result.begin() + index[i],nums[i]);
        }
        return result;
    }
};

// vector<int> v;
// v.insert(v.begin() + 2, 10);