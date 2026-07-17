// Last updated: 17/07/2026, 14:20:27
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left =0;
        int right = height.size() -1;
        int ans = 0;

        while(left <= right){
             int h = min(height[left],height[right]);
            int w = right - left;

            ans = max(ans,h * w); 
            if(height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return ans;
    }
};