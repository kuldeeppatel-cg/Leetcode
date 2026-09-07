// Last updated: 07/09/2026, 13:45:12
class Solution {
public:
    int digitSum(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int countLargestGroup(int n) {
        vector<int> freq(37, 0);

        // Maximum digit sum for n <= 10^4 is 36
        for (int i = 1; i <= n; i++) {
            freq[digitSum(i)]++;
        }

        int maxSize = 0;
        int answer = 0;

        for (int count : freq) {
            if (count > maxSize) {
                maxSize = count;
                answer = 1;
            } 
            else if (count == maxSize) {
                answer++;
            }
        }

        return answer;
    }
};
