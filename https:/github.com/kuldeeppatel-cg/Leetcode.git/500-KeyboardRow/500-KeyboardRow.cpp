// Last updated: 02/08/2026, 18:58:19
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char, int> row;

        string r1 = "qwertyuiop";
        string r2 = "asdfghjkl";
        string r3 = "zxcvbnm";

        for (char c : r1) {
            row[c] = 1;
            row[toupper(c)] = 1;
        }

        for (char c : r2) {
            row[c] = 2;
            row[toupper(c)] = 2;
        }

        for (char c : r3) {
            row[c] = 3;
            row[toupper(c)] = 3;
        }

        vector<string> ans;

        for (string word : words) {
            int keyboardRow = row[word[0]];
            bool valid = true;

            for (char c : word) {
                if (row[c] != keyboardRow) {
                    valid = false;
                    break;
                }
            }

            if (valid)
                ans.push_back(word);
        }

        return ans;
    }
};