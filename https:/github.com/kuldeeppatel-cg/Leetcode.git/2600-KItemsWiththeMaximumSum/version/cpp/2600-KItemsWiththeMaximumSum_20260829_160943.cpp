// Last updated: 29/08/2026, 16:09:43
1class Solution {
2public:
3    int kItemsWithMaximumSum(int numOnes, int numZeros,
4                             int numNegOnes, int k) {
5        
6        int ans = 0;
7
8        // Take 1s first
9        int take = min(k, numOnes);
10        ans += take;
11        k -= take;
12
13        // Take 0s
14        take = min(k, numZeros);
15        k -= take;
16
17        // Take -1s
18        ans -= k;
19
20        return ans;
21    }
22};