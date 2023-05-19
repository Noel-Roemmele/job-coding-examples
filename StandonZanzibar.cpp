#include<bits/stdc++.h>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    while(cases--) {
        int f, s = -1;
        int import = 0;
        while (cin >> f && f != 0) {
            if (s == -1) {
                s = f;
                continue;
            }
            if (f > 2 * s) {
                import += f - (2 * s);
            }
            s = f;
        }
        cout << import << endl;
    }
    return 0;
}