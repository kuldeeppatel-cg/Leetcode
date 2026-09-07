// Last updated: 07/09/2026, 13:46:54
class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> freq;

        // Count frequency of each card
        for (int card : deck) {
            freq[card]++;
        }

        int g = 0;

        // Find GCD of all frequencies
        for (auto& [card, count] : freq) {
            g = gcd(g, count);
        }

        return g >= 2;
    }
};