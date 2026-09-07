// Last updated: 07/09/2026, 13:44:29
class Solution {
public:
    string interpret(string command) {
        string result = "";
        string check = "";
        for (char it : command) {
            check += it;
            if (check == "G") {
                result += 'G';
                check = "";
            } else if (check == "()") {
                result += 'o';
                check = "";
            } else if (check == "(al)") {
                result += "al";
                check = "";
            }
        }
        return result;
    }
};