// Last updated: 17/07/2026, 14:19:44
class Solution {
public:
    bool isPowerOfFour(int n) {
        for(int i=1; i*i<n/2; i++){
            if(n == pow(4,i)){
                return true;
            }
        }
        return (n == 1) ? true : false;
    }
};