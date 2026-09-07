// Last updated: 07/09/2026, 13:43:38
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