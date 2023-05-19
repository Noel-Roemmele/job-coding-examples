#include<bits/stdc++.h>
using namespace std;
int main() {
    double a1, b1, a2, b2;
    double sum1 = 0, sum2 = 0;
    cin >> a1 >> b1 >> a2 >> b2;
    sum1 = ((b1 + a1) / 2.0) + ((a2 + b2) / 2.0);
    cin >> a1 >> b1 >> a2 >> b2;
    sum2 = ((b1 + a1) / 2.0) + ((a2 + b2) / 2.0);
    if (sum1 == sum2) {
        cout << "Tie" << endl;
    } else if (sum1 > sum2) {
        cout << "Gunnar" << endl;
    } else {
        cout << "Emma" << endl;
    }
    return 0;
}