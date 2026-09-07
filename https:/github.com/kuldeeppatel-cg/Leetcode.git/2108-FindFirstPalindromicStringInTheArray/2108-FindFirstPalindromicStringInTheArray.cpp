// Last updated: 07/09/2026, 13:43:22
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