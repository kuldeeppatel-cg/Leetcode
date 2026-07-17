// Last updated: 17/07/2026, 14:18:22
class Solution {
public:
    int countWord(string word){
        int sum = 0;
        for(char ch: word){
            if(ch == ' '){
                sum++;
            }
        }
        return sum + 1;
    }
    int mostWordsFound(vector<string>& sentences) {
        int max = 0;                // ["alice and bob love leetcode", "i think so too", "this   isgreat thanks very much"]
        for(auto it: sentences){
            int data = countWord(it);
            if(max < data){    // 5 < 6
                max = data;   // max = 6
            }
        }
        return max;   // 6
    }
};
// "how are you" 