// Last updated: 17/07/2026, 14:19:38
class Solution {
public:
    int getSum(int a, int b) {

        while (b != 0) {
            int carry = (a & b);
            a = a ^ b;
            b = (unsigned int)carry << 1;
        }
        return a;
    }
};