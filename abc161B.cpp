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
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    int possible = 0;
    for (int i = 0; i < n; i++) {
        possible += a[i] >= sum / (4.0*m);
    }
    cout << (possible >= m ? "Yes" : "No");
    return 0;
}
