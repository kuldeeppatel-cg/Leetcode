// Last updated: 07/09/2026, 13:44:38
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1,w2;       // 
        for(string it : word1){
            w1 += it;
        }
        for(string it : word2){
            w2 += it;
        }
        return (w1 == w2);
    }
};
