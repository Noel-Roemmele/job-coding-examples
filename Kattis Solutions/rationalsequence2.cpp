#include<bits/stdc++.h>
using namespace std;

int solve (int p, int q) {
    if (p == q) {
        return 1;
    }
    if (p < q) {
        return 2 * solve(p, q - p);
    } else {
        return 2 * solve(p - q, q) + 1;
    }
}

int main() {
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        int n, p, q;
        char s;
        cin >> n >> p >> s >> q;
        cout << n << " " << solve(p, q) << endl;
    }
    return 0;
}