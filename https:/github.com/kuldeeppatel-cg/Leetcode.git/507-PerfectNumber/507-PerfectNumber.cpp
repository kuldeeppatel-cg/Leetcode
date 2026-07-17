// Last updated: 17/07/2026, 14:19:29
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int result = 0;
        // int num1 = num;
        int i = 1;
        while(i < num){
            if(num%i == 0){
                result += i;
            } i++;
        }
        return (num == result);
    }
};