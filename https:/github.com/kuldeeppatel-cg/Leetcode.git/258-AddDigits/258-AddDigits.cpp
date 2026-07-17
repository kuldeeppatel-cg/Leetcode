// Last updated: 17/07/2026, 14:19:51
class Solution {
public:
    int digitSum(int n){
        int sum = 0;
        while(n != 0){
            int digit = n%10;
            sum += digit;
            n /= 10;
        }
        return sum;
    }
    int addDigits(int num) {
        while(num > 9){
            num = digitSum(num);
        }
        return num;
    }
};