#include<bits/stdc++.h>
using namespace std;
int main() {
    int yyyy = 0;
    cin >> yyyy;
    int mm = 5;
    int dd = 31;
    int a = (14 - mm) / 12;
    int y = yyyy - a;
    int m = mm + 12 * a - 2;
    int d = ((dd + y + y/4 - y/100 + y/400 + 31 * m / 12) % 7);
    if (d < 3) {
        cout << "6 weeks" << endl;
    } else {
        cout << "5 weeks" << endl;
    }
    return 0;
}