#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n, d;
    cin >> n >> d;
    vector<long long int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] /= d;
    }
    sort(begin(a),end(a));
    long long int pairs = 0;
    long long int count = 0;
    for (int i = 0; i < n; i++) {
        if (i != n - 1) {
            if (a[i] == a[i + 1]) {
                count++;
            } else {
                pairs += (count*(count + 1))/2;
                count = 0;
            }
        } else {
            pairs += (count*(count + 1))/2;
            count = 0;
        }
    }
    cout << pairs << endl;
    return 0;
}