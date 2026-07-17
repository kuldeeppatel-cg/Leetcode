// Last updated: 17/07/2026, 14:18:07
class Solution {
public:
    bool digitCount(string num) { 
       unordered_map<int,int> store;  // eg  "1210" {1:2,}
       for(char ch:num){
          store[ch - '0']++;      // 1 -> 49 - 48 = 1
       }                       // store = {1:2,2:1,0:1}

       for(int i=0; i<num.length();i++){    //  0 != 0     i= 3
          if((num[i] - '0') != store[i]){
             return false;
          }
       }
       return true;
    }
};

// "2235" = num
// num[0]  0 -> '2' 

// "1210" 
// num[0]  0 -> 1  num[1]  1 -> 2 num[2]  -> 2 -> 1  num[3] 3 -> 0
// true  false