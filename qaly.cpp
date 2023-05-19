#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    double q = 0, y = 0, t = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> q >> y;
        t += (q * y);
    }
    cout << fixed << setprecision(3) << t << endl;
    return 0;
}