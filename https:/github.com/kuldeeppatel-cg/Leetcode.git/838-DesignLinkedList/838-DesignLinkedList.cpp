// Last updated: 12/08/2026, 14:02:15
class MyLinkedList {
private:
    struct Node {
        int val;
        Node *prev, *next;
        Node(int x) : val(x), prev(nullptr), next(nullptr) {}
    };

    Node *head, *tail;
    int size;

    Node* getNode(int index) {
        Node* cur;
        if (index < size / 2) {
            cur = head->next;
            while (index--) cur = cur->next;
        } else {
            cur = tail->prev;
            int steps = size - index - 1;
            while (steps--) cur = cur->prev;
        }
        return cur;
    }

public:
    MyLinkedList() {
        head = new Node(0);
        tail = new Node(0);
        head->next = tail;
        tail->prev = head;
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size) return -1;
        return getNode(index)->val;
    }

    void addAtHead(int val) {
        addAtIndex(0, val);
    }

    void addAtTail(int val) {
        addAtIndex(size, val);
    }

    void addAtIndex(int index, int val) {
        if (index < 0) index = 0;
        if (index > size) return;

        Node *nextNode = (index == size) ? tail : getNode(index);
        Node *prevNode = nextNode->prev;

        Node *newNode = new Node(val);

        newNode->prev = prevNode;
        newNode->next = nextNode;
        prevNode->next = newNode;
        nextNode->prev = newNode;

        size++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;

        Node *node = getNode(index);

        node->prev->next = node->next;
        node->next->prev = node->prev;

        delete node;
        size--;
    }
};


/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */



