#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>

#define ll long long
#define ull unsigned long long

using namespace std;

int main() {
    vector<int> board(9);
    vector<int> map(101, 9);
    vector<int> haveIt(10);
    for (int i = 0; i < 9; i++) {
        cin >> board[i];
        map[board[i]] = i;
    }
    int n;
    cin >> n;
    while (n--) {
        int b;
        cin >> b;
        haveIt[map[b]]++;
    }
    if (haveIt[0] && haveIt[1] && haveIt[2] ||
            haveIt[3] && haveIt[4] && haveIt[5] ||
            haveIt[6] && haveIt[7] && haveIt[8] ||
            haveIt[0] && haveIt[3] && haveIt[6] ||
            haveIt[1] && haveIt[4] && haveIt[7] ||
            haveIt[2] && haveIt[5] && haveIt[8] ||
            haveIt[0] && haveIt[4] && haveIt[8] ||
            haveIt[2] && haveIt[4] && haveIt[6]) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}