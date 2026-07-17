// Last updated: 17/07/2026, 14:19:22
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size();
        vector<int> ans(size, 0);
        stack<int> st;
        for (int i = 0; i < size; i++) {
           while(!st.empty() && temperatures[i]>temperatures[st.top()]){
             int preIndex = st.top();
             st.pop();
             ans[preIndex] = i - preIndex;
           }
           st.push(i);
        }
        return ans;
    }
};