#include<bits/stdc++.h>
using namespace std;
int main() {
    int t = 0, c = 0, g = 0;
    int s = 0;
    char n;
    while (cin >> n) {
        if (n == 'T') {
            t++;
        } else if (n == 'C') {
            c++;
        } else if (n == 'G') {
            g++;
        }
    }
    s = min({t, c, g}) * 7;
    cout << pow(t, 2) + pow(c, 2) + pow(g, 2) + s << endl;
    return 0;
}