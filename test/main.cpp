#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> x(256, 0);
    x['a'] = 10;
    cout << x['a'] << endl;

    return 0;
}
