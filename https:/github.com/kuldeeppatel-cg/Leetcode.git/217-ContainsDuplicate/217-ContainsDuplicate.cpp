// Last updated: 22/07/2026, 09:13:38
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0;  
        int j = 1;
        while(nums.size() > j){
            if(nums[i] == nums[j]){
                return true;
            }
            i++;
            j++;
        }
        return false;
    }
};