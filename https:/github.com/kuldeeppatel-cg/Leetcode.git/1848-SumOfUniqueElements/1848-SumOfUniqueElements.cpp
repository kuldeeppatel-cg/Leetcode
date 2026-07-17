// Last updated: 17/07/2026, 14:18:43
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