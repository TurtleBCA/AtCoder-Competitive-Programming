#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

int main() {
    string s;
    cin >> s;
    bool ans = true;
    for (int i = 0; i < s.size()/2; i++) {
        if (s[i] != s[s.size()/2 - 1 - i]) {
            ans = false;
        }
    }

    for (int i = s.size()/2 + 1; i < s.size(); i++) {
        int a = i;
        int b = s.size() - 1 - i + (s.size()/2 + 1);
        if (s[i] != s[s.size() - 1 - i + (s.size()/2 + 1)]) {
            ans = false;
        }
    }

    string reversed(s);
    reverse(reversed.begin(), reversed.end());
    ans = ans && (s == reversed);
    cout << (ans ? "Yes" : "No");
    return 0;
}
