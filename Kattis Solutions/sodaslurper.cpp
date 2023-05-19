#include<bits/stdc++.h>
using namespace std;
int main() {
    int e, f, c;
    cin >> e >> f >> c;
    int sum = e + f;
    int b = 0;
    while (sum >= c) {
        int d = sum / c;
        sum = d + (sum % c);
        b += d;
    }
    cout << b << endl;
    return 0;
}