// Last updated: 07/09/2026, 14:32:56
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* middleNode(ListNode* head) {
14        // Solution - 1
15    //     int size = 0;
16    //     ListNode* i = head;
17    //     while (i != nullptr) {
18    //         size++;
19    //         i = i->next;
20    //     }
21    //     int mid = size / 2;
22
23    //     int count = 0;
24    //     i = head;
25    //     while (count < mid) {
26    //         i = i->next;
27    //         count++;
28    //     }
29    //     return i;
30    // }
31
32    // solution -2
33
34    ListNode * i = head; 
35    ListNode * j = head-> next;
36
37   if(head -> next == NULL){
38     return head;
39   }
40
41    while(j  != nullptr && j -> next != nullptr && j -> next -> next != nullptr) {
42        i = i -> next ; 
43        j = j -> next -> next ;
44    }
45    return i->next;
46    }
47};