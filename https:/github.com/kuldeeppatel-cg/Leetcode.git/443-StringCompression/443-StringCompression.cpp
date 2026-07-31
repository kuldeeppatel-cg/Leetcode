// Last updated: 31/07/2026, 13:27:58
class Solution {
public:
    int compress(vector<char>& chars) {
        string result;
        int count = 1;
        char check = chars[0];

        for (int i = 1; i < chars.size(); i++) {
            if (chars[i] == check) {
                count++;
            } else {
                result += check;

                if (count > 1) {
                    result += to_string(count);
                }

                check = chars[i];
                count = 1;
            }
        }

        result += check;
        if (count > 1) {
            result += to_string(count);
        }

        for (int i = 0; i < result.length(); i++) {
            chars[i] = result[i];
        }

        return result.length();
    }
};