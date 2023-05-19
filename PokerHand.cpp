#include<bits/stdc++.h>
using namespace std;
int main() {
    string cards[5];
    vector<char> p;
    for (int i = 0; i < 5; i++) {
        cin >> cards[i];
        p.push_back(cards[i][0]);
    }
    sort(p.begin(), p.end());
    int k = 0;
    int kc = 0;
    bool f = 1;
    for (int i = 0; i < 4; i++) {
        if (f) {
            kc = 1;
            f = 0;
        }
        if (p[i] == p[i + 1]) {
            kc++;
        } else {
            if (kc > k) {
                f = 1;
                k = kc;
            }
        }
    }
    if (kc > k) {
        k = kc;
    }
    cout << k << endl;
    return 0;
}