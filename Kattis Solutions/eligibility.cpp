#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string name, date1, date2;
        int year1, year2, c;
        cin >> name >> year1 >> date1 >> year2 >> date2 >> c;
        if (year1 >= 2010 || year2 >= 1991) {
            cout << name << " eligible" << endl;
        } else {
            if (c < 41) {
                cout << name << " coach petitions" << endl;
            } else {
                cout << name << " ineligible" << endl;
            }
        }
    }
    return 0;
}