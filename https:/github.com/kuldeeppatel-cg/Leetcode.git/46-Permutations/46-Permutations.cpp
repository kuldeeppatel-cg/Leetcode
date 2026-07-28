// Last updated: 28/07/2026, 14:10:44
class Solution {
public:
    vector<vector<int>> result;

    void solve(vector<int>& nums, vector<int>& path, vector<bool>& used) {

        if (path.size() == nums.size()) {
            result.push_back(path);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {

            if (used[i])
                continue;

            used[i] = true;
            path.push_back(nums[i]);

            solve(nums, path, used);

            path.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {

        vector<int> path;
        vector<bool> used(nums.size(), false);

        solve(nums, path, used);

        return result;
    }
};