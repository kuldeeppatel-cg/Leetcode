// Last updated: 17/07/2026, 14:19:33
class Solution {
public:
    int countSegments(string s) {
        vector<string> sen;
        string word;
        if(s.length() == 0) return 0;
        s += ' ';
        for(char ch:s){
           if(ch != ' ') {
             word += ch;
           }
           else{
            if(word.length() == 0){
                continue;
            }
             sen.push_back(word);
             word = "";
           }
        }
        return sen.size();
    }
};