// Last updated: 17/07/2026, 14:19:34
class Solution {
public:
    string decodeString(string s) {          // s = "3[a2[c]]"
        stack<string> st;
        stack<int> numSt;               
        string currStr = "";
        int num = 0;

        for (char c : s) {
            if (isdigit(c)) {           
                num = num * 10 + (c - '0');    // num = 0x10 + 3 = num = 3   
            } else if (c == '[') {
                numSt.push(num);
                st.push(currStr);
                num = 0;
                currStr = "";
            } else if (c == ']') {
                string temp = currStr;
                currStr = st.top();
                st.pop();
                int repeat = numSt.top();
                numSt.pop();
                while (repeat--) {
                    currStr += temp;
                }
            } else {
                currStr += c;
            }
        }
        return currStr;
    }
};