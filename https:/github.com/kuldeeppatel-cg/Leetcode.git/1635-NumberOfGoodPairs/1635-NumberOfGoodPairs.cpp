// Last updated: 24/08/2026, 09:24:31
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> freq;
        int ans = 0;

        for (int x : nums) {
            ans += freq[x];
            freq[x]++;
        }

        return ans;
    }
};