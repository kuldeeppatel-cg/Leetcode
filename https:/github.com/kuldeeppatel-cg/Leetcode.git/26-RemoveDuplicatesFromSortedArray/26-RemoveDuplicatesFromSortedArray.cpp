// Last updated: 17/07/2026, 14:20:22
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int i = 0;

      for(int j=1; j<nums.size() ; j++){
        if(nums[i] !=  nums[j]){
            ++i;
            nums[i] = nums[j];
        }
      }
      return i+1;
    }
};