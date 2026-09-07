// Last updated: 07/09/2026, 13:44:23
class Solution {
public:
    int minPartitions(string n) {
        char maxDigit = *std::max_element(n.begin(), n.end());
        return maxDigit - '0';
    }
};