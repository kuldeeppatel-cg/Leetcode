// Last updated: 07/09/2026, 13:44:55
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       int sum = 0;                // [1,1,1,1,1]
       vector<int> result;
       for(int it: nums ){
         sum += it;            // sum = 1+4 
         result.push_back(sum);   // [1,2,3,4,5]
       }
       return result;
    }
};