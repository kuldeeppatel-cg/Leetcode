// Last updated: 17/07/2026, 14:19:32
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;

        if (s.length() < p.length())
            return result;

        vector<int> pCount(26, 0);
        vector<int> sCount(26, 0);

        for (char ch : p)
            pCount[ch - 'a']++;

        int k = p.length();

        for (int i = 0; i < s.length(); i++) {

            sCount[s[i] - 'a']++;

            if (i >= k)
                sCount[s[i - k] - 'a']--;

            if (sCount == pCount)
                result.push_back(i - k + 1);
        }

        return result;
    }
};