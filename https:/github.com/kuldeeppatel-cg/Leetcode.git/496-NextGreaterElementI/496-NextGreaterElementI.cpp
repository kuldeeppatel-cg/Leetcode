// Last updated: 17/07/2026, 14:19:30
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int found = 0;
        int nextGreater = -1;

        for(int i=0; i < nums1.size(); i++){
            found = 0; nextGreater = -1;
            for(int j=0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j]) found = 1;
                else if(found && nums2[j] > nums1[i]){
                    nextGreater = nums2[j];
                    break;
                }
            }
            ans.push_back(nextGreater);
        }
        return ans;
    }
};