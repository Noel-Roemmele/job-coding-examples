#include<bits/stdc++.h>
using namespace std;
int main() {
    int l, x;
    cin >> l >> x;
    int c = 0, r = 0;
    string o;
    int a;
    for (int i = 0; i < x; i++) {
        cin >> o >> a;
        if (o == "enter") {
            if (c + a <= l) {
                c += a;
            } else {
                r++;
            }
        } else {
            c -= a;
        }
    }
    cout << r << endl;
    return 0;
}