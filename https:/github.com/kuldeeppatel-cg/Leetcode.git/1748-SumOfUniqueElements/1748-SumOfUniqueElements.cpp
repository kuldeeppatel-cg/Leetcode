// Last updated: 07/09/2026, 13:44:18
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> store;
        for(int it: nums){
            store[it]++;
        }
        int sum = 0;
        for(int it: nums){
            if(store[it] == 1){
                sum += it;
            }
        }
        return sum;
    }
};