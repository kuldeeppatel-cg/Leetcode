// Last updated: 07/09/2026, 13:44:07
class Solution {
public:
    bool squareIsWhite(string coordinates) {
        if ((coordinates[0] % 2 == 0 && coordinates[1] % 2 == 0) ||
            (coordinates[0] % 2 == 1 && coordinates[1] % 2 == 1)) {
            return false; // even -> false  odd -> true
        }  // e + e =e
         // o + o = e
         return true;
    }
};