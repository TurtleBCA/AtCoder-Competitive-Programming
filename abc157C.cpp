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
    int n, m;
    cin >> n >> m;
    vector< set<int> > rule(n+1);
    for (int i = 0; i < m; i++) {
        int s, c;
        cin >> s >> c;
        rule[s].insert(c);
    }

    string ans(n, '0');
    bool possible = true;
    for (int i = 1; i <= n; i++) {
        if (rule[i].size() > 1) {
            possible = false;
            break;
        } else if (!rule[i].empty()) {
            ans[i-1] = '0' + *rule[i].begin();
        }
    }

    if (n > 1 && ans[0] == '0') {
        if (rule[1].empty()) {
            ans[0] = '1';
        } else {
            possible = false;
        }
    }

    cout << (possible ? ans : "-1");
    return 0;
}
