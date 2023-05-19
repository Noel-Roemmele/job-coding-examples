#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> r(n);
    for (int i = 0; i < n; i++) {
        cin >> r[i];
    }
    for (int i = (n - 1); i > -1; i--) {
        cout << r[i] << endl;
    }
    return 0;
}