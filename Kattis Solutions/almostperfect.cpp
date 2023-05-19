#include<bits/stdc++.h>
using namespace std;
int p(int n) {
    int t = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i) {
                t += i;
            } else {
                t += (n / i) + i;
            }
        }
    }
    return t + 1;
}
int main() {
    int n;
    int x;
    while (cin >> n) {
        x = p(n);
        if (x == n) {
            cout << n << " perfect" << endl;
        } else if (abs(n - x) <= 2) {
            cout << n << " almost perfect" << endl;
        } else {
            cout << n << " not perfect" << endl;
        }
    }
    return 0;
}