// Last updated: 17/07/2026, 14:18:27
class Solution {
public:
    bool areOccurrencesEqual(string s) {
       unordered_map<char,int> store;

       for(char ch: s) {
          store[ch]++;
       }
       int check = store[s[0]];
       for(char ch: s){
         if(check != store[ch]){
            return false;
         }
       }
       return true;
    }
};