// Last updated: 17/07/2026, 14:17:49
class Solution {
public:
    string processStr(string s) {
        string result;

        for (char ch : s) {
            switch (ch) {
                case '#':
                    result += result;
                    break;

                case '%':
                    reverse(result.begin(), result.end());
                    break;

                case '*':
                    if (!result.empty())
                        result.pop_back();
                    break;

                default:
                    result.push_back(ch);
            }
        }

        return result;
    }
};