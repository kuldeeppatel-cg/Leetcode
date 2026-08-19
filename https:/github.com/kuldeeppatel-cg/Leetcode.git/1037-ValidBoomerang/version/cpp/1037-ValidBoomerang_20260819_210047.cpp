// Last updated: 19/08/2026, 21:00:47
1class Solution {
2public:
3    bool isBoomerang(vector<vector<int>>& points) {
4        int x1 = points[0][0];
5        int y1 = points[0][1];
6
7        int x2 = points[1][0];
8        int y2 = points[1][1];
9
10        int x3 = points[2][0];
11        int y3 = points[2][1];
12
13        return (x2 - x1) * (y3 - y1) !=
14               (y2 - y1) * (x3 - x1);
15    }
16};