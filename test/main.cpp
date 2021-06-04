#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
};

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int main() {
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    Node* cur = head;
    cout << cur->data << endl;
    cur = cur->next;
    cout << cur->data << endl;

    cout << "--------------------" << endl;

    ListNode* h1 = NULL;
    cout << h1->val <<endl;

    return 0;
}
