// Last updated: 17/07/2026, 14:19:03
class Solution {
public:
    int maximum69Number (int num) {
        vector<int> digit;
        int result = 0;
        while(num!=0){
            int dig = num%10;    // 9669%10 = 9     9996
            digit.push_back(dig);
            num /= 10;         // 9669/10 = 966  
        }
        // digit = {6,9,9,9}
        reverse(digit.begin(),digit.end());  // digit = {9,9,9,6}
       for(int i=0;i<digit.size();i++){
          if(digit[i] == 6){
            digit[i] = 9;
            break;
          }       //  {9,9,9,9}
       }
       for(int it:digit){
         result = result*10 + it;   // 999x10 + 9 = 9999
       }
       return result;
    }
};