#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> k(n);
    vector<int> kk(n - 1);
    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }
    for (int i = 0; i < n - 1; i++) {
        cin >> kk[i];
    }
    sort(k.begin(), k.end());
    sort(kk.begin(), kk.end());
    k.push_back(-1);
    for (int i = 0; i < n; i++) {
        if (k[i] != kk[i]) {
            cout << k[i] << endl;
            break;
        }
    }
    return 0;
}