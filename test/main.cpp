#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <queue>
#include <stack>
#include <utility>

using namespace std;

//vector<string> foo(string str, int index, vector<string> codes) {
//    if (index >= str.size()) {
//        return codes;
//    }
//    if (index + 1 < str.size()) {
//        codes.push_back("" + str[index + 1]);
//        codes = foo(str, index + 1, codes);
//    }
//}
int nc = 0;

void foo(string s, int i) {
    if (i < s.size() && s[i] != '0') {
        foo(s, i + 1);
    }
    if (i + 1 < s.size() && s[i] != '0' && (s[i] - '0') * 10 + s[i + 1] - '0' <= 26) {
        foo(s, i + 2);
    }
    if (i == s.size()) {
        nc ++;
    }
}

int main() {
    string s = "12";
    foo(s, 0);

    cout << nc << endl;
    return 0;
}
