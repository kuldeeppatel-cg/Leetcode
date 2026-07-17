// Last updated: 17/07/2026, 14:19:37
class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i=0;
        int j=0;
        while(t.length() != j-1){
            if(s[i] == t[j]){
                i++;
                j++;
            }
            else{
               return t[j];
            }
        }
        return 0;
    }
};