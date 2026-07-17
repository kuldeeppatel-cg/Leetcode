// Last updated: 17/07/2026, 14:19:11
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;

        for(int value: arr){
            freq[value]++;
        }
        unordered_set<int>count;

        for(auto& it: freq){
            count.insert(it.second);
        }
         if(freq.size() == count.size()){
            return true;
         }
         return false;
    }
};