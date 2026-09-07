// Last updated: 07/09/2026, 13:41:53
class Solution {
public:
    int digitFrequencyScore(int n) {
        int sum = 0;
        while(n > 0){
            int dig = n%10;
            sum += dig;
            n /= 10;
        }
        return sum;
    }
};