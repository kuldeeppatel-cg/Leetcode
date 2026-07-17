// Last updated: 17/07/2026, 14:18:31
class Solution {
public:                                        //012345678
    int countGoodSubstrings(string s) {  // s = "aababcabc"
        int count = 0;
        int countGood = 0;
        string word;
        for(int i=0;i < s.length(); i++){   // i = 2
            count++;                     // count =  3     // countGood = 0
            if(word.length() < 3){
                word += s[i];            // word =  "aba"
            }
            if(count == 3){
                i -= 2;                 // i = 1
                if((word[0] != word[1]) && (word[1] != word[2]) && (word[0] != word[2])){
                    countGood++;
                }
                word = "";
                count = 0;
            }
        }
        return countGood;
    }
};

// "aabjekj"  => "aab" , "abj" , "bje" , "jek","ekj"
// for 