// Last updated: 17/07/2026, 14:18:40
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;
        if(ruleKey == "type"){                //[["phone","blue","pixel"],["computer","silver","lenovo"],["phone","gold","iphone"]]      // ruleKey = "color"     ruleValue = "silver"
            for(auto it: items){
                if(ruleValue == it[0]) count++;
            }
        }
        else if(ruleKey == "color"){
            for(auto it: items){
                if(ruleValue == it[1]) count++;   // count = 1
        }}
        else if(ruleKey == "name"){
            for(auto it: items){
                if(ruleValue == it[2]) count++;
        }}
        return count;
    }
};
// rulekey ->  { for
//}