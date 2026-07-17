// Last updated: 17/07/2026, 14:19:21
class Solution {
public:
    string toLowerCase(string s) {
        string result = "";
        for(char ch : s){
            if(ch >= 'A' && ch <= 'Z'){
               ch += 32;
            }
            result += ch;
        }
        return result;
    }
};