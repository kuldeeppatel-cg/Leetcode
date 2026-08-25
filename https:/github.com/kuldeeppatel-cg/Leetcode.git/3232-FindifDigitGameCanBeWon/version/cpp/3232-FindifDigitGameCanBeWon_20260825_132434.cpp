// Last updated: 25/08/2026, 13:24:34
1class Solution {
2public:
3    bool canAliceWin(vector<int>& nums) {
4        int singleDigitSum = 0;
5        int doubleDigitSum = 0;
6
7        for (int num : nums) {
8            if (num < 10) {
9                singleDigitSum += num;
10            } else {
11                doubleDigitSum += num;
12            }
13        }
14
15        return singleDigitSum != doubleDigitSum;
16    }
17};
18