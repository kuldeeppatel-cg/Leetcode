// Last updated: 17/07/2026, 14:18:19
class Solution {
public:
    string capitalizeTitle(string title) {
        
        vector<string> para;
        string word = "";

        for(char ch : title) {

            if(ch != ' ') {
                word += ch;
            }
            else {
                para.push_back(word);
                word = "";
            }
        }

        para.push_back(word);

        for(auto &it : para) {

            for(int i = 0; i < it.length(); i++) {

                if(it[i] >= 'A' && it[i] <= 'Z') {
                    it[i] += 32;
                }
            }

            if(it.length() > 2) {

                if(it[0] >= 'a' && it[0] <= 'z') {
                    it[0] -= 32;
                }
            }
        }

        string ans = "";

        for(int i = 0; i < para.size(); i++) {

            ans += para[i];

            if(i != para.size() - 1) {
                ans += ' ';
            }
        }

        return ans;
    }
};