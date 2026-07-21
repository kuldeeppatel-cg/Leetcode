// Last updated: 21/07/2026, 14:29:17
1class Solution {
2public:
3
4    bool isVowel(char ch){
5        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
6            return true;
7        }
8        return false;
9    }
10
11    int maxVowels(string s, int k) {
12        int left = 0;
13        int right = k-1;
14        int count = 0;
15        int ans = INT_MIN;
16        for(int i=left; i <= right; i++){
17            if(isVowel(s[i])){
18                count++;
19            }
20        }
21        ans = count;
22        left++;
23        right++;
24
25        while(right < s.size()){
26            if(isVowel(s[left-1])){
27                count--;
28            }
29            if(isVowel(s[right])){
30                count++;
31            }
32            ans = max(count,ans);
33
34            ++left;
35            ++right;
36        }
37        return ans; 
38    }
39};