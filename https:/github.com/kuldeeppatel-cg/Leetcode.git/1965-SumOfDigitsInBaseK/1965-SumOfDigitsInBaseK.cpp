// Last updated: 17/07/2026, 14:18:34
class Solution {
public:
    int sumBase(int n, int k) {
       int sum = 0;
       while(n != 0) {
         sum += n%k;
         n /= k;
       }
       return sum;
    }
};