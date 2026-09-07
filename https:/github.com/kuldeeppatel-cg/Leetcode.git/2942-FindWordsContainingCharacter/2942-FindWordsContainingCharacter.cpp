// Last updated: 07/09/2026, 13:42:13
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> res;
        for(int i=0; i<words.size(); i++){
            if(words[i].find(x) != -1){
                res.push_back(i);
            }
        }
        return res;
    }
};