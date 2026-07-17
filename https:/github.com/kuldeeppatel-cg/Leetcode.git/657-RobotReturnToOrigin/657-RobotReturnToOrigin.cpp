// Last updated: 17/07/2026, 14:19:23
class Solution {
public:
    bool judgeCircle(string moves) {
       int x = 0;
       int y = 0;
    for(char it:moves){
        if(it == 'U')y++;       // "LL" x = -2 ,0
        else if(it == 'D')y--;
        else if(it == 'R')x++;
        else if(it == 'L')x--;
    }
    return (x == 0 && y == 0) ? true : false;
    }
};