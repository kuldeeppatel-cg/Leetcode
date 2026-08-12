// Last updated: 12/08/2026, 14:04:54
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = 0;
        ListNode* temp = head;

        // Count nodes
        while (temp != nullptr) {
            length++;
            temp = temp->next;
        }

        // If head has to be removed
        if (length == n) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        int pos = length - n;

        temp = head;
        for (int i = 1; i < pos; i++) {
            temp = temp->next;
        }

        ListNode* del = temp->next;
        temp->next = del->next;
        delete del;

        return head;
    }
};