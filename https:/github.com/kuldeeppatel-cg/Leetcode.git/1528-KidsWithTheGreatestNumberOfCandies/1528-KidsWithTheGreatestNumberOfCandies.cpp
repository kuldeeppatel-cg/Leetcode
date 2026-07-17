// Last updated: 17/07/2026, 14:18:58
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = candies[0];   // candies = [1,2,1,4,2] ex = 1
        vector<bool> result;
        for(int it: candies){  // max = 1
            if(it > max){
                max = it;     // max = 4
            }
        }
        for(int it: candies){             
            if(it+extraCandies >= max){   // 2 + 1   >= 4
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;   // [false,false,fasle,true,false]
    }
};