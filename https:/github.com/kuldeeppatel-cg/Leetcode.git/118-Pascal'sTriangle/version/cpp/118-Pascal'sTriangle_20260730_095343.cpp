// Last updated: 30/07/2026, 09:53:43
1class Solution {
2public:
3    vector<vector<int>> generate(int numRows) {
4
5        vector<vector<int>> ans;
6
7        for (int i = 0; i < numRows; i++) {
8
9            vector<int> row(i + 1, 1);
10
11            for (int j = 1; j < i; j++) {
12                row[j] = ans[i - 1][j - 1] + ans[i - 1][j];
13            }
14
15            ans.push_back(row);
16        }
17
18        return ans;
19    }
20};