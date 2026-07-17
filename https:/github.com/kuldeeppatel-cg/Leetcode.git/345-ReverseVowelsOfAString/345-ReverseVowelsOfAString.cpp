// Last updated: 17/07/2026, 14:19:41
class Solution {
public:
    string reverseVowels(string s) {
        string vowel = "aeiouAEIOU";
        int i = 0;
        int j = s.length() - 1;
        while(i < j){
            int find = vowel.find(s[i]);
            int find1 = vowel.find(s[j]);
            if(find != -1 && find1 != -1){
               swap(s[i],s[j]);
               i++;
               j--;
            }
            else if(find == -1){
                i++;
            }
            else if(find1 == -1){
                j--;
            }
        }
        return s;
    }
};