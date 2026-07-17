// Last updated: 17/07/2026, 14:19:10
class Solution {
public:
    string removeDuplicates(string s, int k) {   // s = "deeedbbcccbdaa"    k = 3
        stack<pair<char, int>> st;
    
        for(char ch : s) {

            if(!st.empty() && st.top().first == ch) {          
                st.top().second++;

                if(st.top().second == k) {
                    st.pop();
                }
            }
            else {
                st.push({ch, 1});
            }
        }
        
        string result = "";

        while(!st.empty()) {
            char ch = st.top().first;
            int cnt = st.top().second;

            while(cnt--) {
                result += ch;
            }

            st.pop();
        }

        reverse(result.begin(), result.end());

        return result;
    }
};