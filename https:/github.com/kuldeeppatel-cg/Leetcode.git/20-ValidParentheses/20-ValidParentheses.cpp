// Last updated: 17/07/2026, 14:20:24
class Solution {
public:
    bool isValid(string s) {
        string temp;
        unordered_map<char,char> check = {
            {')','('},               //"([{}])"  temp  s = "]"
            {']','['},
            {'}','{'}
        };
        for(char ch: s){
            if(ch == '(' || ch == '[' || ch == '{'){  // temp = ""
                temp += ch;
            }
            else{
                if(temp.length() == 0){
                    return false;
                }
                else if(temp[temp.length()-1] != check[ch]){
                    return false;
                }
                temp.pop_back();
            }
        }
        if(temp.length() == 0) return true;
        return false;
    }
};
//   "()[{}]" 

