#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

int main() {
    int K, N;
    cin >> K >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    A.push_back(A[0]);
    int maxDist = 0;
    for (int i = 0; i < N; i++) {
        maxDist = max((A[i+1] - A[i] + K) % K, maxDist);
    }
    cout << K - maxDist;
    return 0;
}
