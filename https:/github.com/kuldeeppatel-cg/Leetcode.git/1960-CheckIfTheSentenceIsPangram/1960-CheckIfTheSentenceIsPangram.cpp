// Last updated: 17/07/2026, 14:18:35
class Solution {
public:
    bool checkIfPangram(string sentence) {
        string check = "abcdefghijklmnopqrstuvwxyz";
        for(char it:check){
            int find = sentence.find(it); // -1
            if(find == -1){
                return false;
            }
        }
        return true;
    }
};