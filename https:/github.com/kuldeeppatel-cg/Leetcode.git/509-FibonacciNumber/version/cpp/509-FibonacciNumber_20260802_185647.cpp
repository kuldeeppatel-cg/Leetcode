// Last updated: 02/08/2026, 18:56:47
1class Solution {
2public:
3    int fib(int n) {
4        if (n == 0)
5            return 0;
6        if (n == 1)
7            return 1;
8
9        int prev2 = 0;
10        int prev1 = 1;
11
12        for (int i = 2; i <= n; i++) {
13            int curr = prev1 + prev2;
14            prev2 = prev1;
15            prev1 = curr;
16        }
17
18        return prev1;
19    }
20};