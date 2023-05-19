#include<bits/stdc++.h>
using namespace std;
int gcd (int a, int b) {
    int r = 0;
    while (b) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main() {
    int n;
    cin >> n;
    vector<int> r(n);
    for (int i = 0; i < n; i++) {
        cin >> r[i];
    }
    for (int i = 1; i < n; i++) {
        int g = gcd(r[0], r[i]);
        cout << r[0] / g << "/" << r[i] / g << endl;
    }
    return 0;
}