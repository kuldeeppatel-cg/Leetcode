// Last updated: 17/07/2026, 14:18:26
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        for(int i:nums){
            ans.push_back(i);
        }
         for(int i:nums){
            ans.push_back(i);
        }
        return ans;
    }
};