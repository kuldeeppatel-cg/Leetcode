// Last updated: 17/07/2026, 14:18:01
class Solution {
public:
    char repeatedCharacter(string s) {
           int count[26] = {0};
           for(char ch : s){
             count[ch - 'a']++;  
             if(count[ch - 'a'] == 2){
                return ch;
             }
           }
           return 0;
        
    }
};
// "abccbaacz"    a count[ch - 'a'] -> count['a' - 'a'] = count[0] -> a index =0 
 //   count[0] = 1;
 //   count[1] =     a = 1  b = 1  c = 2  2
                //
 // 

 // count[25] = 0;