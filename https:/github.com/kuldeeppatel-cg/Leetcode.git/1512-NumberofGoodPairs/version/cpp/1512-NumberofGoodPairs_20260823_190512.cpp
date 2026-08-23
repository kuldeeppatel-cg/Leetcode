// Last updated: 23/08/2026, 19:05:12
1class Solution {
2public:
3    int numIdenticalPairs(vector<int>& nums) {
4        unordered_map<int, int> freq;
5        int ans = 0;
6
7        for (int x : nums) {
8            ans += freq[x];
9            freq[x]++;
10        }
11
12        return ans;
13    }
14};