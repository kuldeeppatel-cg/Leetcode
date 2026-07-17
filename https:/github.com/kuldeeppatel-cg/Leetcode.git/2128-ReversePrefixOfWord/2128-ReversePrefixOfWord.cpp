// Last updated: 17/07/2026, 14:18:24
class Solution {
public:
    string reversePrefix(string word, char ch) {
        string result = "";
        int index = word.find(ch);
        for(int i=index; i>=0; i--){
            result += word[i];
        }
        for(int i=index+1; i<word.length(); i++){
            result += word[i];
        }
        return result;
    }
};