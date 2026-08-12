// Last updated: 12/08/2026, 14:02:23
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> bannedWords;

        for (string word : banned) {
            bannedWords.insert(word);
        }

        unordered_map<string, int> freq;

        string word = "";
        string answer = "";
        int maxFreq = 0;

        for (int i = 0; i <= paragraph.size(); i++) {

            if (i < paragraph.size() &&
                isalpha(paragraph[i])) {

                word += tolower(paragraph[i]);
            }
            else if (!word.empty()) {

                if (bannedWords.find(word) == bannedWords.end()) {

                    freq[word]++;

                    if (freq[word] > maxFreq) {
                        maxFreq = freq[word];
                        answer = word;
                    }
                }

                word = "";
            }
        }

        return answer;
    }
};