// Last updated: 17/07/2026, 14:18:46
class Solution {
public:
    int minPartitions(string n) {
        char maxDigit = *std::max_element(n.begin(), n.end());
        return maxDigit - '0';
    }
};