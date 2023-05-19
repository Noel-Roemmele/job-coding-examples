#include<bits/stdc++.h>
using namespace std;
int main() {
    bool deck[4][13] = {0};
    char s;
    int num;
    int p = 13, k = 13, h = 13, t = 13;
    while (cin >> s >> num) {
        if (s == 'P') {
            if (deck[0][num]) {
                cout << "GRESKA" << endl;
                return 0;
            } else {
                deck[0][num] = 1;
                p--;
            }
        } else if (s == 'K') {
            if (deck[1][num]) {
                cout << "GRESKA" << endl;
                return 0;
            } else {
                deck[1][num] = 1;
                k--;
            }
        } else if (s == 'H') {
            if (deck[2][num]) {
                cout << "GRESKA" << endl;
                return 0;
            } else {
                deck[2][num] = 1;
                h--;
            }
        } else if (s == 'T') {
            if (deck[3][num]) {
                cout << "GRESKA" << endl;
                return 0;
            } else {
                deck[3][num] = 1;
                t--;
            }
        }
    }
    cout << p << " " << k << " " << h << " " << t << endl;
    return 0;
}