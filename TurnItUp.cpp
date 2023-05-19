#include<bits/stdc++.h>
using namespace std;
int main() {
    int l = 7;
    int r = 0;
    cin >> r;
    string s = "";
    for (int i = 0; i <= r; i++) {
        getline(cin, s);
        if (s == "Skru op!") {
            l++;
            if (l > 10) {
                l = 10;
            }
        } 
        if (s == "Skru ned!") {
            l--;
            if (l < 0) {
                l = 0;
            }
        }
    }
    cout << l << endl;
    return 0;
}