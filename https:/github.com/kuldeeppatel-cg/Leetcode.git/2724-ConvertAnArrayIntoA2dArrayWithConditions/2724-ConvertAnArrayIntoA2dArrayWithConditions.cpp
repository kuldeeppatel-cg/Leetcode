// Last updated: 17/07/2026, 14:17:52
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> freq;   // nums = [1,3,4,1,2,3,1]
        vector<vector<int>> result;     // freq = {1:2,3:2,4:1,}

        for (int num : nums) {     //  result = {{1,3,4,2},{1,3},{1}}
            int row = freq[num];     // row = 

            if (row == result.size()) {
                result.push_back({});
            }

            result[row].push_back(num);
            freq[num]++;
        } 

        return result;
    }
};