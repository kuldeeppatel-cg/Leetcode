// Last updated: 07/09/2026, 13:45:20
class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        while (num != 0) {
            if (num % 2 == 1) {
                num -= 1;
                count++;
            } else {
                num /= 2;
                count++;
            }
        }
        return count;
    }
};