#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    cout << N * (N-1) / 2 + M * (M - 1) / 2;
    return 0;
}
