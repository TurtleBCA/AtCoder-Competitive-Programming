#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    bool possible = false;
    for (int i = B*10; i < (B+1)*10; i++) {
        if ((int)(i*0.08) == A) {
            cout << i;
            possible = true;
            break;
        }
    }

    if (!possible) {
        cout << -1;
    }

    return 0;
}
