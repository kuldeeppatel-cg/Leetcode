// Last updated: 17/07/2026, 14:18:30
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return (nums[nums.size()-1] * nums[nums.size()-2]) - (nums[0]*nums[1]) ;
    }
};
// [4,2,5,9,7,4,8]   => {2,4,4,5,7,8,9}   
//  8*9 - 2*4 = 72 - 8 = 64