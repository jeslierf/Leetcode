#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> x;
    x.push_back(1);
    x.push_back(2);
    x.push_back(3);
    x.push_back(4);
    vector<int>::iterator it;
    it = find(x.begin(), x.end(), 10);
    cout << it - x.begin() << endl;

    int a = 1;
    cout << ++a << endl << a++ << endl;
    return 0;
}
