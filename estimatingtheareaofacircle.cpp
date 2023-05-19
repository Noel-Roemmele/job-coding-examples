#include<bits/stdc++.h>
using namespace std;
int main() {
    double r, m, c;
    while (cin >> r >> m >> c && r != 0 && m != 0 && c != 0) {
        cout << setprecision(10) << M_PI * pow(r, 2) << " " << pow((r * 2), 2) * (c / m) << endl;
    }
    return 0;
}