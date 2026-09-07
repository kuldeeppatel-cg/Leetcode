// Last updated: 07/09/2026, 13:44:03
class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> words;
        s += ' ';
        string wor = "";
        for (char c : s) {
            if (c != ' ') {
                wor += c;
            } else {
                words.push_back(wor);
                wor = "";
            }
        }
        wor = "";
        for (int i = 0; i < k; i++) {
            if (i != k - 1) {
                wor += words[i] + ' ';
            } else {
                wor += words[i];
            }
        }
        return wor;
    }
};