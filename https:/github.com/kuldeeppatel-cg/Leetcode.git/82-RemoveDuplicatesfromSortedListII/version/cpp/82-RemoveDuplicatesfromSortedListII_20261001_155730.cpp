// Last updated: 01/10/2026, 15:57:30
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
13    ListNode* deleteDuplicates(ListNode* head) {
14        if (head == nullptr) {
15            return head;
16        }
17        ListNode* i = head;
18        ListNode* j = head->next;
19        ListNode* dummy = new ListNode();
20        ListNode* temp = dummy;
21
22        while (j != nullptr) {
23            if (i->val == j->val) {
24                j = j->next;
25            } else {
26                if (i->val == i->next->val) {
27                    i = j;
28                    j = j->next;
29                } else {
30                    dummy->next = i;
31                    i = i->next;
32                    j = j->next;
33                    dummy = dummy->next;
34                }
35            }
36        }
37        if (i->next == nullptr) {
38            dummy->next = i;
39            dummy = dummy->next;
40           
41        }
42         dummy->next = nullptr;
43        return temp->next;
44    }
45};