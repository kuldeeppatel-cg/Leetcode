// Last updated: 07/09/2026, 13:46:12
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