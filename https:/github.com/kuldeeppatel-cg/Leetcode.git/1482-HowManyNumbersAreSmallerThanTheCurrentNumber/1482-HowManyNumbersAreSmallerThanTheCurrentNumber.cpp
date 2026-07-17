// Last updated: 17/07/2026, 14:19:02
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;        // [8,1,2,2,3]
        for(int i=0; i < nums.size() ; i++){  
           int count = 0;
           for(int j=0; j<nums.size() ; j++){      // nums[i] = 12
              if(i != j && nums[j] < nums[i]){
                 count++;     //    count = 4
              }
           } 
           result.push_back(count);     // result = [4,0,1]
        }
        return result;
    }
};