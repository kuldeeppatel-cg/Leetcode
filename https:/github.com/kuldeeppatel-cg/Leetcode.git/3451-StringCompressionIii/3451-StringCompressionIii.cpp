// Last updated: 31/07/2026, 13:25:34
class Solution {
public:
    string compressedString(string word) {
        int count = 0;
        string result = "";
        char check = word[0];
        
        for(char ch:word){
            if(check == ch && count < 9){
                count++;
            }
            else{
                result += to_string(count);
                result += check;
                check = ch;
                count = 1;
            }
        }
        result += to_string(count);
        result += check;

        return result;
    }
};