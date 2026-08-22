// Last updated: 22/08/2026, 23:37:30
1class Solution {
2public:
3    int minCostToMoveChips(vector<int>& position) {
4        int odd = 0;
5        int even = 0;
6
7        for (int x : position) {
8            if (x % 2 == 0)
9                even++;
10            else
11                odd++;
12        }
13
14        return min(odd, even);
15    }
16};