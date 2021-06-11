#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <queue>
#include <stack>
#include <utility>

using namespace std;

int main() {
    unordered_map<int, int> m;
    m[1] = 1;
    m[2] = 2;
    m[4] = 4;
    m[3] = 3;

    auto ptr = m.begin();
    cout << ptr << endl;

    return 0;
}
