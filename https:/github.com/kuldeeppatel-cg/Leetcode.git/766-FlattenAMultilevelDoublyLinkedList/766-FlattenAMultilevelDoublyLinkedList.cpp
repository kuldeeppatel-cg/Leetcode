// Last updated: 22/08/2026, 23:40:00
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if (head == nullptr)
            return head;

        Node* curr = head;

        while (curr) {
            if (curr->child) {
                Node* next = curr->next;

                // Flatten child list
                Node* child = flatten(curr->child);

                // Connect current node to child
                curr->next = child;
                child->prev = curr;
                curr->child = nullptr;

                // Find the end of child list
                Node* tail = child;

                while (tail->next) {
                    tail = tail->next;
                }

                // Connect child list to original next
                tail->next = next;

                if (next)
                    next->prev = tail;
            }

            curr = curr->next;
        }

        return head;
    }
};