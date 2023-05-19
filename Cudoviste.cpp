#include<bits/stdc++.h>
using namespace std;
int spaceCheck(char c) {
    if (c == '.') {
        return 1;
    } else if (c == 'X') {
        return 2;
    } else {
        return 0;
    }
}
int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<char>> grid;
    for (int i = 0; i < r; i++) {
        vector<char> row;
        for (int j = 0; j < c; j++) {
            char input;
            cin >> input;
            row.push_back(input);
        }
        grid.push_back(row);
    }
    int l[5] = {0, 0, 0, 0, 0};
    for (int i = 0; i < (r - 1); i++) {
        for (int j = 0; j < (c - 1); j++) {
            int a = spaceCheck(grid[i][j]);
            int b = spaceCheck(grid[i + 1][j]);
            int c = spaceCheck(grid[i][j + 1]);
            int d = spaceCheck(grid[i + 1][j + 1]);
            int sum = a + b + c + d;
            if (min({a, b, c, d}) != 0) {
                l[sum - 4]++;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        cout << l[i] << endl;
    }
    return 0;
}