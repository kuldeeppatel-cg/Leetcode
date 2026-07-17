// Last updated: 17/07/2026, 14:19:49
class Solution {
public:
    bool isUgly(int n) {    // n = 8
        while(n > 0){    
            if(n%2 == 0) n /= 2;  // n=1
            else if(n%3 == 0) n /= 3;
            else if(n%5 == 0) n /= 5;
            else{
                break;
            }
        }
        return n == 1;
    }
};