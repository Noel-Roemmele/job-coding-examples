#include<bits/stdc++.h>
using namespace std;
int main() {
    set<string> boat;
    int p, n;
    cin >> p >> n;
    string input;
    bool pa = 0;
    int day;
    for (int i = 0; i < n; i++) {
        cin >> input;
        boat.insert(input);
        if (boat.size() == p && !pa) {
            pa = 1;
            day = i + 1;
        }
    }
    if (pa) {
        cout << day << endl;
    } else {
        cout << "paradox avoided" << endl;
    }
    return 0;
}