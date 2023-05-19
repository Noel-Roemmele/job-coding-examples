#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, p, s;
    cin >> n >> p >> s;
    int m;
    for (int i = 0; i < s; i++) {
        cin >> m;
        int input;
        bool rk = 0;
        for (int j = 0; j < m; j++) {
            cin >> input;
            if (input == p) {
                rk = 1;
            }
        }
        if (rk) {
            cout << "KEEP" << endl;
        } else {
            cout << "REMOVE" << endl;
        }
    }
    return 0;
}