// Last updated: 31/07/2026, 13:27:59
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        set<int>s1;
       vector<int>v1; 
        for(int i  = 0;i<nums.size();i++){
            if(s1.find(nums[i])!=s1.end()){
                v1.push_back(nums[i]);
            }
            else{
                s1.insert(nums[i]);
            }
        }
        return v1;
    }
};