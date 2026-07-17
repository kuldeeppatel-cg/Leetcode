// Last updated: 17/07/2026, 14:18:16
class Solution {
public:
    bool checkString(string s) {
        string check = s;
        sort(s.begin(),s.end());
        return (s == check) ? true : false;
    }
};