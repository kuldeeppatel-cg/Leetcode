// Last updated: 17/07/2026, 14:20:26
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string subString = strs[0];

        for(int i=1; i<strs.size(); i++){
            while(strs[i].find(subString) != 0){
                subString.pop_back();
            }
        }
        return subString;
    }
};