// Last updated: 22/08/2026, 23:39:06
class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int odd = 0;
        int even = 0;

        for (int x : position) {
            if (x % 2 == 0)
                even++;
            else
                odd++;
        }

        return min(odd, even);
    }
};