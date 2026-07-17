// Last updated: 17/07/2026, 14:19:28
class Solution {
public:
    bool detectCapitalUse(string word) {
      int countCap = 0;
      int countLow = 0;
      for(char ch: word){
        if(ch >= 65 && ch <= 90 ){
            countCap++;
        }
        else{
            countLow++;
        }
      }
      if(countCap == 1 && (word[0] >= 65 && word[0] <= 90 )){
         return true;
      }
      else if(countCap == 0 || countLow == 0){
         return true;
      }
      return false;
    }
};
//