#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

bool validSub(string s, int a, int b) {
    while(a < b) {
        cout << s[a] << a << s[b] << b << endl;
        if (s[a++] != s[b++])
            return false;
    }
    return true;
}

bool validPalindrome(string s) {
    for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
        if (s[i] != s[j]) {
            return validSub(s, i + 1, j) || validSub(s, i, j - 1);
        }
    }
    return true;
}

int main() {
    string s = "deeee";
    //bool res = validPalindrome(s);
    //cout << res << endl;

    cout << validSub(s, 1, 4) << endl;
    cout << validSub(s, 0, 3) << endl;


    return 0;
}
