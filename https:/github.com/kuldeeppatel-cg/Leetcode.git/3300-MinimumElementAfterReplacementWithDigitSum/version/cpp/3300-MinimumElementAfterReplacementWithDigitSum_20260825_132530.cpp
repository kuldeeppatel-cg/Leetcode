// Last updated: 25/08/2026, 13:25:30
1class Solution {
2public:
3    int minElement(vector<int>& nums) {
4        int ans = INT_MAX;
5
6        for (int num : nums) {
7            int sum = 0;
8
9            while (num > 0) {
10                sum += num % 10;
11                num /= 10;
12            }
13
14            ans = min(ans, sum);
15        }
16
17        return ans;
18    }
19};
20