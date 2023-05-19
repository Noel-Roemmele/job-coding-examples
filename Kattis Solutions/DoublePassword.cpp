#include<bits/stdc++.h>
using namespace std;
int main() {
    string p1, p2;
    cin >> p1 >> p2;
    int n = 1;
    for (int i = 0; i < 4; i++) {
        if (p1[i] == p2[i]) {
            n *= 1;
        } else {
            n *= 2;
        }
    }
    cout << n << endl;
    return 0;
}