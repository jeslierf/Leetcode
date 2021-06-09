#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

int minMeetingRooms(vector<vector<int>>& intervals) {
    int num = 0;
    sort(intervals.begin(), intervals.end());
    for (int i = 0; i < intervals.size(); i++) {
        int j = i;
        int local_num = 1;
        cout << intervals[i][0] << " ";
        while(--j >= 0) {
            if (intervals[i][0] < intervals[j][1]) {
                cout << intervals[j][1] << " ";
                local_num++;
            } else {
                break;
            }
        }
        cout << endl;
        num = local_num > num ? local_num : num;
    }

    return num;
}

int main() {
    vector<vector<int>> x = {{4, 18}, {1, 35}, {12, 45}, {25, 46}, {22, 27}};

    int res = minMeetingRooms(x);
    cout << res << endl;

    return 0;
}
