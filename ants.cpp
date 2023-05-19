#include<bits/stdc++.h>
using namespace std;
int main() {
    int cases = 0;
    cin >> cases;
    while (cases--) {
        int l = 0, n = 0;
        cin >> l >> n;
        int early = 0;
        int late = 0;
        for (int i = 0; i < n; i++) {
            int p = 0;
            cin >> p;
            int left = p;
            int right = l - p;
            early = max(min(left, right), early);
            late = max(max(left, right), late);
        }
        cout << early << " " << late << endl;
    }
    return 0;
}