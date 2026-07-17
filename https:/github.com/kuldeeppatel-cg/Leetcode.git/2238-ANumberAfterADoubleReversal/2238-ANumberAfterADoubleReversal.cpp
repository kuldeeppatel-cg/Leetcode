// Last updated: 17/07/2026, 14:18:17
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