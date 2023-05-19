#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 0, t = 0, nt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        if (t < 0) {
            nt++;
        }
    }
    cout << nt << endl;
}