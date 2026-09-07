// Last updated: 07/09/2026, 13:43:06
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