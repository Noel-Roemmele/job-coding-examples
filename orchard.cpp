#include<bits/stdc++.h>
using namespace std;
bool visted[5][5][5][5][9] = {0};
double val[5][5][5][5][9];
double solve(int r, int g, int b, int y, int s) {
    if (r + g + b + y > 0 && s == 0) {
        return 0;
    }
    if (r + g + b + y == 0 && s > 0) {
        return 1;
    }
    if (visted[r][g][b][y][s]) {
        return val[r][g][b][y][s];
    }
    double x = 0;
    double n = 0;
    if (r != 0) {
        x += solve(r - 1,g,b,y,s);
        n++;
    }
    if (g != 0) {
        x += solve(r,g - 1,b,y,s);
        n++;
    }
    if (b != 0) {
        x += solve(r,g,b - 1,y,s);
        n++;
    }
    if (y != 0) {
        x += solve(r,g,b,y - 1,s);
        n++;
    }
    int m = max({r,g,b,y});
    if (r == m) {
        x += solve(r - 1,g,b,y,s);
        n++;
    } else if (g == m) {
        x += solve(r,g - 1,b,y,s);
        n++;
    } else if (b == m) {
        x += solve(r,g,b - 1,y,s);
        n++;
    } else if (y == m) {
        x += solve(r,g,b,y - 1,s);
        n++;
    }
    if (s != 0) {
        x += solve(r,g,b,y,s - 1);
        n++;
    }
    visted[r][g][b][y][s] = 1;
    assert(x / n <= 1);
    val[r][g][b][y][s] = x / n;
    return val[r][g][b][y][s];
}
int main() {
    int r, g, b, y, s;
    cin >> r >> g >> b >> y >> s;
    double c = solve(r,g,b,y,s);
    cout << fixed << setprecision(12) << c << endl;
    return 0;
}