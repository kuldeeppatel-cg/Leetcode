// Last updated: 07/09/2026, 13:47:35
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