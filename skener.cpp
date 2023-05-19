#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<vector<char>> m;
    int r, c, zr, zc;
    cin >> r >> c >> zr >> zc;
    for (int i = 0; i < r; i++) {
        vector<char> row;
        for (int j = 0; j < c; j++) {
            char c;
            cin >> c;
            row.push_back(c);
        }
        m.push_back(row);
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < zr; j++) {
            for (int k = 0; k < c; k++) {
                for (int l = 0; l < zc; l++) {
                    cout << m[i][k];
                }
            }
            cout << endl;
        }
    }
    return 0;
}