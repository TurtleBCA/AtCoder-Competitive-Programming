#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

int main() {
    int X;
    cin >> X;
    int ans = (X / 500) * 1000;
    X %= 500;
    ans += (X / 5) * 5;
    cout << ans << endl;
    return 0;
}
