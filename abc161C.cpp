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
    ull n, k;
    cin >> n >> k;
    cout << min(n%k, k-n%k);
    return 0;
}
