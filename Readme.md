# Leetcode

---
## C++ STL Examples
---
### Queue (First in First out)
`empty()`, `size()`, `front()`, `back()`, `swap()`
```c++
queue<int> q;
cout << "Empty: " << q.empty() << endl;
// Stdout ---- Empty: 1

q.push(1);
q.push(2);
q.push(3);
cout << "Front: " << q.front() << ", Back: " << q.back() << endl;
// Stdout ---- Front: 1, Back: 3

q.pop();
cout << "Front: " << q.front() << endl;
// Stdout ---- Front: 2

queue<int> q_;
q_.swap(q);
cout << "New queue size: " << q_.size() << ", Old queue size: " << q.size() << endl;
// Stdout ---- New queue size: 2, Old queue size: 0
```
---
### Stack (Last in First out)
```c++

```

---

### Linked List
Class
```c++
// GeeksforGeeks
class Node {
public:
    int data;
    Node* next;
};
// LeetCode
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
```
Create a Linked List:
```c++
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
```
Traverse
```c++
void printList(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}
```

## Stack

## Leetcode
- 2 [Add Two Numbers](Questions/2.md) (Medium, Linked List)
- 3 [Longest Substring Without Repeating Characters](Questions/3.md)
- 56 [Merge Intervals](Questions/56.md) (Medium, Array, Sort)
- 146 [LRU Cache](Questions/146.md) (Medium, LRU, Hash Table, C++ Vector)
- 200 [Number of Islands](Questions/200.md) (Medium, DFS)
- 238 [Product of Array Except Self](Questions/238.md)
- 346 [Moving Average from Data Stream](Questions/346.md) (Easy, Queue)
- 1041 [Robot Bounded In Circle](Questions/1041.md) (Medium, Math)
