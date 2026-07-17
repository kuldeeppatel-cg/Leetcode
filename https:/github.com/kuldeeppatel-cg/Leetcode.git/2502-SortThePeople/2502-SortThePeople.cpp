// Last updated: 17/07/2026, 14:17:58
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int, string> data;     // names = ["Alice","Bob","Bob"], heights = [155,185,150]
        vector<string> result;
        for (int i = 0; i < names.size(); i++) {   // data = {155: "Alice", 185 : "Bob" , 150: "Bob"}
            data[heights[i]] = names[i];
        }
        sort(heights.begin(), heights.end());      // heights = {150,155,185}

        for (int i = heights.size() - 1; i >= 0; i--) {
            result.push_back(data[heights[i]]);         //   result = {"Bob","Alice", "Bob"}
        }
        return result;
    }
};
// {}