// Last updated: 17/07/2026, 14:18:39
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