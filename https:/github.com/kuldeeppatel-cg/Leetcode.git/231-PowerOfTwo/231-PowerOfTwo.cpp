// Last updated: 17/07/2026, 14:19:53
class Solution {
public:
    bool isPowerOfTwo(int n) {
         if (n <= 0) {
            return false;
        }
        while( n%2 == 0){
            n /= 2;
        }
        return (n == 1) ? true : false;
    }
};