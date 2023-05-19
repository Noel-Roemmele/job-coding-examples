#include<bits/stdc++.h>
using namespace std;
vector<int> baseConverter(int b, int n) {
    vector<int> e;
    while (n > 0) {
        e.push_back(n % b);
        n /= b;
    }
    reverse(e.begin(), e.end());
    return e;
}
long long int SSD(vector<int> e) {
    long long int sum = 0;
    for (int i = 0; i < e.size(); i++) {
        sum += e[i] * e[i];
    }
    return sum;
}
int main() {
    int p;
    cin >> p;
    while (p--) {
        int k, b, n;
        cin >> k >> b >> n;
        vector<int> e = baseConverter(b, n);
        cout << k << " " << SSD(e) << endl;
    }
    return 0;
}