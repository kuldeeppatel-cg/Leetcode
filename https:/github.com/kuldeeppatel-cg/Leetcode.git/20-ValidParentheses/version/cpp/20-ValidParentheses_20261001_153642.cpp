// Last updated: 01/10/2026, 15:36:42
1class Solution {
2public:
3    bool isValid(string s) {
4        string temp;
5        unordered_map<char,char> check = {
6            {')','('},               //"([{}])"  temp  s = "]"
7            {']','['},
8            {'}','{'}
9        };
10        for(char ch: s){
11            if(ch == '(' || ch == '[' || ch == '{'){  // temp = ""
12                temp += ch;
13            }
14            else{
15                if(temp.length() == 0){
16                    return false;
17                }
18                else if(temp[temp.length()-1] != check[ch]){
19                    return false;
20                }
21                temp.pop_back();
22            }
23        }
24        if(temp.length() == 0) return true;
25        return false;
26    }
27};
28//   "()[{}]" 
29
30