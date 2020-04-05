#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <iomanip>

using namespace std;

int main() {
    int L;
    cin >> L;
    double dim = L/3.0;
    cout << fixed;
    cout << setprecision(7);
    cout << dim*dim*dim;
    return 0;
}
