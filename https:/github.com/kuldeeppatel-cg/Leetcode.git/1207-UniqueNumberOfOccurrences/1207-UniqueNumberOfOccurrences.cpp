// Last updated: 07/09/2026, 13:45:55
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