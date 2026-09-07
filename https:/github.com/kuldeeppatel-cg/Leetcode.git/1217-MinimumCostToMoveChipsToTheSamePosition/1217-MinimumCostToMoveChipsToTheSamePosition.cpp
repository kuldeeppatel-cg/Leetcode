// Last updated: 07/09/2026, 13:45:48
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