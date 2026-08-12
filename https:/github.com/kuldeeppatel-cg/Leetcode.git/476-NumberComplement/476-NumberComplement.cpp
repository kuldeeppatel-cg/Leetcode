// Last updated: 12/08/2026, 14:02:44
class Solution {
public:
    int findComplement(int num) {
        int mask = 1;

        while (mask < num)
            mask = (mask << 1) | 1;

        return mask ^ num;
    }
};