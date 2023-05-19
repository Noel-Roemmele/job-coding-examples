#include<bits/stdc++.h>
using namespace std;
int main() {
    double c = (M_PI * 60) / 28;
    int cases;
    cin >> cases;
    string l;
    getline(cin, l);
    while (cases--) {
        getline(cin, l);
        double tf = 0;
        for (int i = 0; i < (l.size() - 1); i++) {
            int i1, i2;
            if (l[i] == ' ') {
                i1 = 27;
            } else if (l[i] == '\'') {
                i1 = 28;
            } else {
                i1 = l[i] - 'A' + 1;
            }
            if (l[i + 1] == ' ') {
                i2 = 27;
            } else if (l[i + 1] == '\'') {
                i2 = 28;
            } else {
                i2 = l[i + 1] - 'A' + 1;
            }
            int diff = abs(i1 - i2);
            if (diff > 14) {
                tf += 28 - diff;
            } else {
                tf += diff;
            }
        }
        tf *= c;
        double st = (tf / 15) + l.size();
        cout << fixed << setprecision(10) << st << endl;
    }
    return 0;
}