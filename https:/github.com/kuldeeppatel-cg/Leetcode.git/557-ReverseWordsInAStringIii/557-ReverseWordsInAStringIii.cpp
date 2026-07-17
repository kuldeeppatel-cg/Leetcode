// Last updated: 17/07/2026, 14:19:26
class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string word = "";
        for (int i = s.length()-1; i>=0; i--) {
            if (s[i] != ' ') {
                word += s[i];
            } else {
                v.push_back(word);
                word = "";
            }
        }
        v.push_back(word);
        word = "";
        for(int i = v.size()-1; i>=0 ; i--){
            if(i != 0){
                word += v[i] + ' ';
            }
            else{
                word += v[i];
            }
        }
        return word;
    }
};