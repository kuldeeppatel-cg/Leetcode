// Last updated: 17/07/2026, 14:19:58
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result  = 0;
        for(char ch: columnTitle){
            int num = ch - 64;             // "AB"   num = 1    num = 2
            result = result*26 + num;     // rusult = 0x26 + 1 = 1  
                    // result = 1x26 + 2 = 28
        }
      return result;
    }
};

// "ZY" = 'Z' = 26 'Y' = 25
// result = 0;
//  int num = 'Z' - 64;
//  result = result x26 + num; = 26
// result = 26x26 + 26 = 701