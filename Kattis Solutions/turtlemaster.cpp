#include<bits/stdc++.h>
using namespace std;
int main() {
    char b[8][8];
    string c = "";
    int x = 7, y = 0, d = 1;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> b[i][j];
            if (b[i][j] == 'T') {
                b[i][j] = '.';
            }
        }
    }
    cin >> c;
    bool bug = false;
    for (int i = 0; i < c.size(); i++) {
        if (c[i] == 'F') {
            if (d == 0) {
                x--;
                if (x < 0) {
                    bug = true;
                }
            } else if (d == 1) {
                y++;
                if (y > 7) {
                    bug = true;
                }
            } else if (d == 2) {
                x++;
                if (x > 7) {
                    bug = true;
                }
            } else if (d == 3) {
                y--;
                if (y < 0) {
                    bug = true;
                }
            }
        } else if (c[i] == 'R') {
            d++;
            if (d > 3) {
                d = 0;
            }
        } else if (c[i] == 'L') {
            d--;
            if (d < 0) {
                d = 3;
            }
        } else if (c[i] == 'X') {
            if (d == 0) {
                if (x - 1 >= 0) {
                    if (b[x - 1][y] == 'I') {
                        b[x - 1][y] = '.';
                    } else {
                        bug = true;
                    }
                } else {
                    bug = true;
                }
            } else if (d == 1) {
                if (y + 1 < 8) {
                    if (b[x][y + 1] == 'I') {
                        b[x][y + 1] = '.';
                    } else {
                        bug = true;
                    }
                } else {
                    bug = true;
                }
            } else if (d == 2) {
                if (x + 1 < 8) {
                    if (b[x + 1][y] == 'I') {
                        b[x + 1][y] = '.';
                    } else {
                        bug = true;
                    }
                } else {
                    bug = true;
                }
            } else if (d == 3) {
                if (y - 1 >= 0) {
                    if (b[x][y - 1] == 'I') {
                        b[x][y - 1] = '.';
                    } else {
                        bug = true;
                    }
                } else {
                    bug = true;
                }
            }
        }
        if (b[x][y] != '.' && b[x][y] != 'D') {
            bug = true;
        }
        //cout << x << " " << y << " " << d << " " << b[x][y] << " " << bug << endl;
        if (bug) {
            cout << "Bug!" << endl;
            return 0;
        }
    }
    if (b[x][y] == 'D') {
        cout << "Diamond!" << endl;
    } else {
        cout << "Bug!" << endl;
    }
    return 0;
}