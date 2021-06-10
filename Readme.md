# Leetcode

---
## C++ STL Examples
---
### Queue (First in First out)
`empty()`, `push()`, `front()`, `back()`, `pop()`, `swap()`, `size()`
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
`empty()`, `push()`, `top()`, `pop()`, `size()`, `swap()`
```c++
stack<int> s;
cout << "Empty: " << s.empty() << endl;
// Stdout ---- Empty: 1

s.push(1);
s.push(2);
s.push(3);
cout << "Top: " << s.top() << endl;
// Stdout ---- Top: 3

s.pop();
cout << "Top: " << s.top() << endl;
// Stdout ---- Top: 2

stack<int> s_;
s_.swap(s);
cout << "New stack size: " << s_.size() << ", Old stack size: " << s.size() << endl;
// Stdout ---- New stack size: 2, Old stack size: 0
```
---
### Vector
```c++
// Initializing std::vector
// 1. push_back
vector<int> v1;
v1.push_back(1);
v1.push_back(2);
v1.push_back(3);
// 2. Specifying size and initializing all values
vector<int> v2(3, 0);
// OR
vector<int> v2_(3);
fill(v2_.begin(), v2_.end(), 0);
// 3. As normal array
vector<int> v3 {1, 2, 3};
// OR
vector<int> v3_ = {1, 2, 3};
// 4. From another vector
vector<int> v4(v1.begin(), v1.end());
// OR
vector<int> v4_;
v4_ = v1;

// Traverse
// 1. for loop
for (auto x: v1)
    cout << x << " ";
cout << endl;
// Stdout ---- 1 2 3
// 2. vector<int>::iterator = v1.begin(), here, using auto to avoid type mismatch
for (auto ptr = v1.begin(); ptr < v1.end(); ptr++)
    cout << *ptr << " ";
cout << endl;
// Stdout ---- 1 2 3

// 2-D vector
vector<vector<int>> v_2d {{1, 2}, {3, 4}, {5, 6}};
for (auto x: v_2d)
    cout << x[0] << " " << x[1] << ", ";
cout << endl;
// Stdout ---- 1 2, 3 4, 5 6,

// Sort
// 1. 1-D
vector<int> v_s_1d {3, 2, 4, 1};
sort(v_s_1d.begin(), v_s_1d.end());
for (auto x: v_s_1d)
    cout << x << " ";
cout << endl;
// Stdout ---- 1 2 3 4
// 2. 2-D
// General, default is first row
vector<vector<int>> v_s_2d {{3, 2}, {5, 1}, {4, 4}};
sort(v_s_2d.begin(), v_s_2d.end());
for (auto x: v_s_2d)
    cout << x[0] << " " << x[1] << endl;
// Stdout ----
// 3 2
// 4 4
// 5 1
// 3. By certain row
vector<vector<int>> v_s_2d_ {{3, 2}, {5, 1}, {4, 4}};
sort(v_s_2d_.begin(), v_s_2d_.end(), sortCol);
for (auto x: v_s_2d_)
    cout << x[0] << " " << x[1] << endl;
// Stdout ----
// 5 1
// 3 2
// 4 4

// Driver function to sort the 2D vector
// on basis of a particular column
// bool sortCol( const vector<int>& v1,
//               const vector<int>& v2 ) {
//     return v1[1] < v2[1];
// }

// Find element
vector<int> v_f {1, 2, 3, 4};
cout << "Index: " << find(v_f.begin(), v_f.end(), 2) - v_f.begin() << endl;
// Stdout ---- Index: 1
// Judge existence, if not exists, vector::find returns end()
cout << "Existence of 2: " << (find(v_f.begin(), v_f.end(), 2) != v_f.end()) << endl;
// Stdout ---- Existence of 2: 1
cout << "Existence of 6: " << (find(v_f.begin(), v_f.end(), 6) != v_f.end()) << endl;
// Stdout ---- Existence of 6: 0

// Copy
vector<int> v_1{1, 2, 3, 4};
vector<int> v_2;
copy(v_1.begin(), v_1.end(), back_inserter(v_2));
v_2.assign(v_1.begin(), v_1.end());
```

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
