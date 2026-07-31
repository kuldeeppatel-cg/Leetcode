// Last updated: 31/07/2026, 13:27:55
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int>s1;
        vector<int>res;

        for(int i = 0;i<nums.size();i++){
            s1.insert(nums[i]);
        }
        for(int i = 1;i<=nums.size();i++){
            if(s1.find(i)==s1.end()){
                res.push_back(i);
            }
        }
        return res;
    }
};