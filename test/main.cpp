#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <queue>
#include <stack>
#include <utility>

using namespace std;

string longestPalindrome(string s) {
    string res = "";
    for (int i = 0; i < s.size(); i++) {
        for (int j = s.size() - 1; j >= i; j--) {
            int di = i;
            int dj = j;
            int flag = 1;
            while(di <= dj) {
                if (s[di] != s[dj]) {
                    flag = 0;
                    break;
                }
                di++;
                dj--;
            }
            if (flag && (j - i + 1) > res.size()) {
                res = s.substr(i, j);
                if (i == j) {
                    res = s[i];
                }
            }
        }
    }
    return res;
}

int main() {
    //string res = longestPalindrome("bb");
    string x = "0123456789";
    string y;
    y.assign(x, 2, 2);

    cout << y << endl;

    std::string str;
    std::string base="The quick brown fox jumps over a lazy dog.";

    str.assign(base,10,9);
    std::cout << str << '\n';         // "brown fox"

    return 0;
}
