// Last updated: 07/09/2026, 13:42:51
class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        int countPair = 0;
        for(char ch: s){
           if(ch == '|'){
             countPair++;
           }
           if(countPair%2 == 0 && ch == '*'){
               count++;
           }
        }
        return count;
    }
};