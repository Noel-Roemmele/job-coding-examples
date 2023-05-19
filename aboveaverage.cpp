#include<bits/stdc++.h>
using namespace std;
int main() {
    int c = 0;
    cin >> c;
    while (c--) {
        double p = 0;
        cin >> p;
        double ave = 0;
        vector<double> g(p, 0);
        for (int i = 0; i < p; i++) {
            cin >> g[i];
            ave += g[i];
        }
        ave /= p;
        double pa = 0;
        for (int i = 0; i < p; i++) {
            if (g[i] > ave) {
                pa++;
            }
        }
        cout << fixed << setprecision(3) << (pa / p) * 100 << "%" << endl;
    }
    return 0;
}