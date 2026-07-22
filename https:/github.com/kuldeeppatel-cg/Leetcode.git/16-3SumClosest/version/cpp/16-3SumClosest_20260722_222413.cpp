// Last updated: 22/07/2026, 22:24:13
1class Solution {
2public:
3    int threeSumClosest(vector<int>& nums, int target) {
4
5        sort(nums.begin(), nums.end());
6
7        int closest = nums[0] + nums[1] + nums[2];
8
9        for (int i = 0; i < nums.size() - 2; i++) {
10
11            int left = i + 1;
12            int right = nums.size() - 1;
13
14            while (left < right) {
15
16                int sum = nums[i] + nums[left] + nums[right];
17
18                if (abs(target - sum) < abs(target - closest))
19                    closest = sum;
20
21                if (sum == target)
22                    return sum;
23
24                else if (sum < target)
25                    left++;
26
27                else
28                    right--;
29            }
30        }
31
32        return closest;
33    }
34};