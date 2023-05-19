#include<bits/stdc++.h>
using namespace std;
int main() {
    string y, p;
    cin >> y >> p;
    if (y[y.size() - 1] == 'e') {
        cout << y + "x" + p << endl;
    } else if (y[y.size() - 1] == 'a' || y[y.size() - 1] == 'i' 
    || y[y.size() - 1] == 'o' || y[y.size() - 1] == 'u') {
        y[y.size() - 1] = 'e';
        cout << y + "x" + p << endl;
    } else if (y[y.size() - 2] == 'e' && y[y.size() - 1] == 'x') {
        cout << y + p << endl;
    } else {
        cout << y + "ex" + p << endl;
    }
    return 0;
}