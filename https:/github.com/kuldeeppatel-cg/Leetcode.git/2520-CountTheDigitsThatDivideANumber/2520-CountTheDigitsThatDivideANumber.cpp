// Last updated: 07/09/2026, 13:42:30
class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int num1 = num;
        while(num1 != 0){
            int dig = num1%10;
            if(num%dig == 0){
                count++;
            }
            num1 /=10;
        }
        return count;
    }
};