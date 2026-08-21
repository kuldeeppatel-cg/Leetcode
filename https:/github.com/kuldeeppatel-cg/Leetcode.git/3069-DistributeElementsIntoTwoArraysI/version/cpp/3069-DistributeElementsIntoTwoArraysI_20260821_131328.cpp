// Last updated: 21/08/2026, 13:13:28
1class Solution {
2public:
3    vector<int> resultArray(vector<int>& nums) {
4        vector<int> a, b;
5
6        a.push_back(nums[0]);
7        b.push_back(nums[1]);
8
9        for (int i = 2; i < nums.size(); i++) {
10            if (a.back() > b.back())
11                a.push_back(nums[i]);
12            else
13                b.push_back(nums[i]);
14        }
15
16        a.insert(a.end(), b.begin(), b.end());
17
18        return a;
19    }
20};