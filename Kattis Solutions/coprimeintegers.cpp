#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
  if (a == b) {
    return a;
  } else if (a > b) {
    return gcd(a - b, b);
  } else {
    return gcd(a, b - a);
  }
}
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int count = 0;
    for (int i = a; i <= b; i++) {
        for (int j = c; j <= d; j++) {
            if (gcd(i,j) == 1) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}