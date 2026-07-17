// Last updated: 17/07/2026, 14:19:46
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> check;
        unordered_map<string, char> reverseCheck;
        int i = 0;
        s += ' ';
        string word;
        for (char ch : s) {
            if (ch != ' ') {
                word += ch;
            } else {
                if (i >= pattern.length()) {
                    return false;
                }
                if (check.count(pattern[i])) {
                    if (check[pattern[i]] != word) {
                        return false;
                    }
                } else {
                    if (reverseCheck.count(word)) {
                        return false;
                    }
                    check[pattern[i]] = word;
                    reverseCheck[word] = pattern[i];
                }
                i++;
                word = "";
            }
        }
        if (i != pattern.length()) {
            return false;
        }
        return true;
    }
};