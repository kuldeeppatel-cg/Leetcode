// Last updated: 07/09/2026, 13:42:25
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int sum = 0;
        vector<int> left;
        vector<int> right;
        vector<int> result;
        for(int in: nums){
            left.push_back(sum);
            sum += in;
        }
        sum = 0;
        for(int i = nums.size() -1; i>=0; i--){
            right.push_back(sum);
            sum += nums[i];
        }
        reverse(right.begin(),right.end());
        for(int i=0 ; i<left.size(); i++){
            result.push_back(abs(left[i] - right[i]));
        }
        return result;
    }
};