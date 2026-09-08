// Last updated: 08/09/2026, 10:02:25
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
13    ListNode* reverseList(ListNode* head) {
14        ListNode* i = head;
15        ListNode* address = nullptr;
16        while(i != nullptr){
17            ListNode* temp = i -> next;
18            i -> next = address;
19            address = i;
20            i = temp;
21        }
22
23        return address;
24    }
25};