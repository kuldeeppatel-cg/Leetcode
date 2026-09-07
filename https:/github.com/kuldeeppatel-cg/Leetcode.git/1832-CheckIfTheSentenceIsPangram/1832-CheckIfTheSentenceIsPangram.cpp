// Last updated: 07/09/2026, 13:43:58
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