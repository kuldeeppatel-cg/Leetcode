// Last updated: 17/07/2026, 14:19:07
class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
                           // n = 4421 % 10 = 1     4421/10 = 442.1 = 442  4/10 = 0 
        while(n > 0){
            int dig = n%10;  
            product *= dig;
            sum += dig; 
            n /= 10;   
        }
     return product - sum;
    }
};
