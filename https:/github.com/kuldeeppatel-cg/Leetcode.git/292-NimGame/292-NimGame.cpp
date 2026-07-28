// Last updated: 28/07/2026, 14:10:12
class Solution {
public:
    bool canWinNim(int n) {
       if(n < 4){
         return 1;
       }
       return (n%4 == 0) ? false : true;
    }
};