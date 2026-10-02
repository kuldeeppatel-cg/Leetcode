// Last updated: 02/10/2026, 22:15:51
1class Solution {
2public:
3    vector<string> result;
4
5    void generate(string s, int open, int close, int n) {
6
7        // If we used all parentheses
8        if (s.length() == 2 * n) {
9            result.push_back(s);
10            return;
11        }
12
13        // We can add '(' if we haven't used all n opening brackets
14        if (open < n) {
15            generate(s + "(", open + 1, close, n);
16        }
17
18        // We can add ')' only when there is an unmatched '('
19        if (close < open) {
20            generate(s + ")", open, close + 1, n);
21        }
22    }
23
24    vector<string> generateParenthesis(int n) {
25        generate("", 0, 0, n);
26        return result;
27    }
28};