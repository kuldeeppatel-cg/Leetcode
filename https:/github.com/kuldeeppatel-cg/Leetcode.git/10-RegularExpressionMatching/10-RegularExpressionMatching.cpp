// Last updated: 17/07/2026, 14:20:30
class Solution {
public:

    int dp[25][25];

    bool solve(int i, int j, string &s, string &p) {

        if (i >= s.length() && j >= p.length()) {
            return true;
        }

        if (j >= p.length()) {
            return false;
        }

        if (dp[i][j] != -1) {
            return dp[i][j];
        }

        bool match = false;
        if (i < s.length() &&
           (s[i] == p[j] || p[j] == '.')) {

            match = true;
        }
        if (j + 1 < p.length() && p[j + 1] == '*') {

            return dp[i][j] =
                solve(i, j + 2, s, p) ||
               (match && solve(i + 1, j, s, p));
        }
        if (match) {

            return dp[i][j] =
                solve(i + 1, j + 1, s, p);
        }

        return dp[i][j] = false;
    }

    bool isMatch(string s, string p) {

        memset(dp, -1, sizeof(dp));

        return solve(0, 0, s, p);
    }
};