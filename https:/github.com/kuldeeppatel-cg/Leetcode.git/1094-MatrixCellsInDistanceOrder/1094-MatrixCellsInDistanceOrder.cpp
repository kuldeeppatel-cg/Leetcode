// Last updated: 22/08/2026, 23:39:31
class Solution {
public:
    vector<vector<int>> allCellsDistOrder(
        int rows,
        int cols,
        int rCenter,
        int cCenter
    ) {
        vector<vector<int>> ans;

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                ans.push_back({r, c});
            }
        }

        sort(ans.begin(), ans.end(), [&](const vector<int>& a,
                                         const vector<int>& b) {
            int distA = abs(a[0] - rCenter) + abs(a[1] - cCenter);
            int distB = abs(b[0] - rCenter) + abs(b[1] - cCenter);

            return distA < distB;
        });

        return ans;
    }
};