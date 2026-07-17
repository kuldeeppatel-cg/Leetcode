// Last updated: 17/07/2026, 14:18:10
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> smaller, greater, equal;
       vector<int> result;
       for(int it : nums){
          if(it < pivot) smaller.push_back(it);
          else if(it > pivot) greater.push_back(it);
          else{
            equal.push_back(it);
          }
       }

       for(int num : smaller) result.push_back(num);
       for(int num : equal) result.push_back(num);
       for(int num : greater) result.push_back(num);

       return result;
    }
};