#include<bits/stdc++.h>
using namespace std;
int main() {
    int k;
    string m, f;
    cin >> k >> m >> f;
    int cs = 0, cd = 0;
    int n = m.length();
    for (int i = 0; i < n; i++) {
        if (m[i] == f[i]) {
            cs++;
        } else {
            cd++;
        }
    }
    cs = min(k, cs);
    cd = min((n - k), cd);
    cout << cs + cd << endl;
    return 0;
}