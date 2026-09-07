// Last updated: 07/09/2026, 13:43:14
class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num == 0){
            return true;
        }
        else if(num%10 == 0){
            return false;
        }
        else{
            return true;
        }
    }
};