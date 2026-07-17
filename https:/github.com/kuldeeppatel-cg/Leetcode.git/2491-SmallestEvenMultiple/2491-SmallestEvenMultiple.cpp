// Last updated: 17/07/2026, 14:17:59
class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2 == 1){
            return n*2;
        }
        else{
            return n;
        }
    }
};