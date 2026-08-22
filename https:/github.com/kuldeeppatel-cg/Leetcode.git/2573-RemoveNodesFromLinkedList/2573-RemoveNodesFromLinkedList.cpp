// Last updated: 22/08/2026, 23:37:56
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        head = reverseList(head);

        int maxVal = 0;
        ListNode* curr = head;
        ListNode* prev = nullptr;

        while (curr) {
            if (curr->val >= maxVal) {
                maxVal = curr->val;
                prev = curr;
            } 
            else {
                prev->next = curr->next;
            }

            curr = curr->next;
        }

        return reverseList(head);
    }
};