// Last updated: 07/09/2026, 13:43:10
class Solution {
public:
    bool checkString(string s) {
        string check = s;
        sort(s.begin(),s.end());
        return (s == check) ? true : false;
    }
};