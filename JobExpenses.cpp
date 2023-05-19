#include<bits/stdc++.h>
using namespace std;
int main() {
    int cases, inp, sum = 0;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        cin >> inp;
        if (inp < 0) {
            sum += (-1 * inp);
        }
    }
    cout << sum << endl;
    return 0;
}