// Last updated: 17/07/2026, 14:18:38
class Solution {
public:
    bool squareIsWhite(string coordinates) {
        if ((coordinates[0] % 2 == 0 && coordinates[1] % 2 == 0) ||
            (coordinates[0] % 2 == 1 && coordinates[1] % 2 == 1)) {
            return false;
        } else {
            return true;
        }
    }
};