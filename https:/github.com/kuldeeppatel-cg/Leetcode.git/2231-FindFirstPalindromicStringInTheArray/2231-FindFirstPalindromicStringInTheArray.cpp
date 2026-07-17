// Last updated: 17/07/2026, 14:18:20
class Solution {
public:
    string firstPalindrome(vector<string>& words) {

        for(string it : words) {

            bool check = true;

            int i = 0;
            int j = it.length() - 1;

            while(i < j) {
                if(it[i] != it[j]) {
                    check = false;
                    break;
                }
                i++;
                j--;
            }

            if(check) {
                return it;
            }
        }

        return "";
    }
};