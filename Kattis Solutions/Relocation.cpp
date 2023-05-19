#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> line;
    int com, r;
    cin >> com >> r;
    int p;
    for (int i = 0; i < com; i++) {
        cin >> p;
        line.push_back(p);
    }
    int rt, fI, sI;
    for (int i = 0; i < r; i++) {
        cin >> rt >> fI >> sI;
        if (rt == 1) {
            line[fI - 1] = sI;
        } else if (rt == 2) {
            cout << abs(line[fI - 1] - line[sI - 1]) << endl;
        }
    }
    return 0;
}