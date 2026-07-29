// Last updated: 29/07/2026, 14:28:07
1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4
5        int low = 0;
6        int mid = 0;
7        int high = nums.size() - 1;
8
9        while (mid <= high) {
10
11            if (nums[mid] == 0) {
12                swap(nums[low], nums[mid]);
13                low++;
14                mid++;
15            }
16            else if (nums[mid] == 1) {
17                mid++;
18            }
19            else {
20                swap(nums[mid], nums[high]);
21                high--;
22            }
23        }
24    }
25};