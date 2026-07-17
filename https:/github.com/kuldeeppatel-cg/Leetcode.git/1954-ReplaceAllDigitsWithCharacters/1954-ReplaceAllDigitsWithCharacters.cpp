// Last updated: 17/07/2026, 14:18:37
class Solution {
public:
    string replaceDigits(string s) {
      string result = ""  ;
      for(int i=0; i<s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            int num = (int)s[i] - 48;
            s[i] = s[i-1] + num;
            result += s[i];
        }
        else{
            result += s[i];
        }
      }
      return result;
    }
};