#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    // Sort the intervals according to the first element
    vector<vector<int>> si; // sorted intervals
    si = intervals;
    for (int i = 0; i < si.size() - 1; i++) {
        for (int j = i + 1; j < si.size(); j++) {
            if (si[j][0] < si[i][0]) {
                si[i][0] = si[j][0];
                si[i][1] = si[j][1];
            }
        }
    }

    for (int i = 0; i < si.size(); i++) {
         cout << si[i][0] << ", " << si[i][1] << endl;
    }

    vector<vector<int>> res;
    res.push_back(si[0]);
    for (int i = 1; i < si.size(); i++) {
        if (si[i][0] > res[res.size() - 1][1]) {
            res.push_back(si[i]);
        } else if (si[i][1] > res[res.size() - 1][1]) {
            res[res.size() - 1][1] = si[i][1];
        }
    }
    return res;
}

int main() {
    vector<vector<int>> intervals = {{1, 4}, {0, 1}};
    vector<vector<int>> res;
    res = merge(intervals);

    for (int i = 0; i < res.size(); i++) {
         cout << res[i][0] << ", " << res[i][1] << endl;
    }

    return 0;
}
