// Last updated: 17/07/2026, 14:19:13
class Solution {
public:
    string defangIPaddr(string address) {
        string result = "";
        for (int i = 0; i < address.length(); i++) {
            if (address[i] == '.') {
                result += "[.]";
            } else {
                result += address[i];
            }
        }
        return result;
    }
};