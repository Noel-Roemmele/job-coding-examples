#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> c1(n);
    for(int i = 0; i < n; i++) {
        cin >> c1[i];
    }
    vector<int> c2 = c1;
    sort(c2.begin(), c2.end());
    if (c1 == c2) {
        cout << 1 << " " << 1 << endl;
        return 0;
    }
    int b = -1, e = -1;
    for (int i = 0; i < n; i++) {
        if (c1[i] != c2[i]) {
            if (b == -1) {
                b = i;
            }
        }
        if (c1[n - i - 1] != c2[n - i - 1]) {
            if (e == -1) {
                e = n - i;
            }
        }
    }
    reverse(c1.begin() + b, c1.begin() + e);
    if (c1 == c2) {
        cout << b + 1 << " " << e << endl;
    } else {
        cout << "impossible" << endl;
    }
    return 0;
}