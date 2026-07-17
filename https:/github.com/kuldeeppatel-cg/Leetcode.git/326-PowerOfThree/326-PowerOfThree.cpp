// Last updated: 17/07/2026, 14:19:45
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 0) return false;
        while(n%3 == 0){
            n /= 3;
        }
        return (n==1) ? true : false;
    }
};