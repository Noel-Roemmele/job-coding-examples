#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (cin >> n && n != -1) {
        int m, hc, hp = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> m >> hc;
            sum += (m * (hc - hp));
            hp = hc;
        }
        cout << sum << " miles" << endl;
    }
    return 0;
}