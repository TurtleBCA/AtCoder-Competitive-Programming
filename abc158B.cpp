#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>

#define ull unsigned long long

using namespace std;

int main() {
    ull N, A, B;
    cin >> N >> A >> B;

    ull patternLen = A+B;
    ull multiplier = N / (patternLen);
    ull remainder = N % (patternLen);
    cout << multiplier * A + min(remainder, A);

    return 0;
}
