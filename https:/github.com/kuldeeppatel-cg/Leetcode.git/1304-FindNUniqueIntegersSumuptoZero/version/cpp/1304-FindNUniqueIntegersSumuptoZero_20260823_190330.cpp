// Last updated: 23/08/2026, 19:03:30
1class Solution {
2public:
3    vector<int> sumZero(int n) {
4        vector<int> ans;
5
6        for (int i = 1; i <= n / 2; i++) {
7            ans.push_back(i);
8            ans.push_back(-i);
9        }
10
11        // If n is odd, add 0
12        if (n % 2 != 0) {
13            ans.push_back(0);
14        }
15
16        return ans;
17    }
18};