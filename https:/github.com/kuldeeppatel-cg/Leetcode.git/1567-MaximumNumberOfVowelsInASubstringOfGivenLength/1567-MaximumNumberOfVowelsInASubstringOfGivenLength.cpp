// Last updated: 22/07/2026, 09:12:39
class Solution {
public:

    bool isVowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            return true;
        }
        return false;
    }

    int maxVowels(string s, int k) {
        int left = 0;
        int right = k-1;
        int count = 0;
        int ans = INT_MIN;
        for(int i=left; i <= right; i++){
            if(isVowel(s[i])){
                count++;
            }
        }
        ans = count;
        left++;
        right++;

        while(right < s.size()){
            if(isVowel(s[left-1])){
                count--;
            }
            if(isVowel(s[right])){
                count++;
            }
            ans = max(count,ans);

            ++left;
            ++right;
        }
        return ans; 
    }
};