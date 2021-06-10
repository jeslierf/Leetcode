#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <queue>
#include <stack>
using namespace std;

int main() {
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


    return 0;
}
