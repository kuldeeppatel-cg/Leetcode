// Last updated: 17/07/2026, 14:18:56
class Solution {
public:
    int xorOperation(int n, int start) {
        int arr[n];
        int answer = 0;
        for(int i=0 ; i<n; i++){
            arr[i]= (start + 2*i);
        }
        for(int i=0;i<n; i++){
          answer ^= arr[i];
        }
        return answer;
    }
};