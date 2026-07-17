// Last updated: 17/07/2026, 14:19:14
class Solution {
public:
    string removeDuplicates(string s) {
        string res;
        for(char ch : s){
            if(!res.empty() && res.back() == ch){
                res.pop_back();
            }
            else{
                res.push_back(ch);
            }
        }
        return res;
    }
};