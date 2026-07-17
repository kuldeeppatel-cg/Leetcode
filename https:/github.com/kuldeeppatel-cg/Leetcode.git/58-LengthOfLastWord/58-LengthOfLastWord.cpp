// Last updated: 17/07/2026, 14:20:15
class Solution {
public:
    int lengthOfLastWord(string s) {
     int i = s.length() - 1;
     int length = 0;
     while(i >= 0){
        if(s[i] != ' '){
            length++;
        }
        else if(s[i] == ' ' && length != 0){
            break;
        }
        i--;
     }
     return length;
    }
};