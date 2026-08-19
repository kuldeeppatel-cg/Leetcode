// Last updated: 19/08/2026, 21:00:35
1class Solution {
2public:
3    bool hasGroupsSizeX(vector<int>& deck) {
4        unordered_map<int, int> freq;
5
6        // Count frequency of each card
7        for (int card : deck) {
8            freq[card]++;
9        }
10
11        int g = 0;
12
13        // Find GCD of all frequencies
14        for (auto& [card, count] : freq) {
15            g = gcd(g, count);
16        }
17
18        return g >= 2;
19    }
20};