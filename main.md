# Leetcode

---

### Queue
First in First out (FIFO)  
__C++ basic operations:__  

| Function  | Descriptions |
| --------- | --- |
| `empty()` | Returns whether the queue is empty. |
| `size()`  | Returns the size of the queue. |
| `swap()`  | Exchange the contents of two queues but the queues must be of same type, although sizes may differ. |
| `emplace()` | Insert a new element into the queue container, the new element is added to the end of the queue. |
| `front()` , `back()` | Return a reference to the first/last element of the queue. |
| `push()` , `pop()` | Add the element to the end of the queue. Delete the first element of the queue. |

---

### Stack
Last in First out (LIFO)

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
- 2. [Add Two Numbers](Questions/2.md) (Medium, Linked List)
- 146. [LRU Cache](Questions/146.md) (Medium, LRU, Hash Table, C++ Vector)
- 200. [Number of Islands](Questions/200.md) (Medium, DFS)
- 346. [Moving Average from Data Stream](Questions/346.md) (Easy, Queue)
- 1041. [Robot Bounded In Circle](Questions/1041.md) (Medium, Math)
