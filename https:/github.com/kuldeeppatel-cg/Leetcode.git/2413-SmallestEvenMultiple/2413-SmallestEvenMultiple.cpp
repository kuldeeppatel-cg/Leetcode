// Last updated: 07/09/2026, 13:42:45
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