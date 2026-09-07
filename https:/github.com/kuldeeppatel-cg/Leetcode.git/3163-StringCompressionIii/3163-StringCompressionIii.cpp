// Last updated: 07/09/2026, 13:42:10
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