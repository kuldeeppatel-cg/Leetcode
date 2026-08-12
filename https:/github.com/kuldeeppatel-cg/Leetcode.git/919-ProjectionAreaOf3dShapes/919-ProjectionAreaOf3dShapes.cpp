// Last updated: 12/08/2026, 14:02:19
class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int area = 0;

        for (int i = 0; i < n; i++) {
            int rowMax = 0;

            for (int j = 0; j < n; j++) {
                if (grid[i][j] > 0)
                    area++;

                rowMax = max(rowMax, grid[i][j]);
            }

            area += rowMax;
        }

        for (int j = 0; j < n; j++) {
            int colMax = 0;

            for (int i = 0; i < n; i++) {
                colMax = max(colMax, grid[i][j]);
            }


            area += colMax;
        }

        return area;
    }
};