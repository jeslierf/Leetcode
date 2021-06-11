#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <queue>
#include <stack>
#include <utility>

using namespace std;

int main() {
    pair<int, char> p1;
    p1.first = 0;
    p1.second = '0';

    pair<int, char> p2(p1);

    pair<int, char> p3(0, '0');

    pair<int, char> p4;
    p4 = make_pair(0, '0');

    p4.swap(p3);

    unordered_map<string, int> m;
    m["a"] = 10;
    cout << ++m["b"] << endl;


    return 0;
}
