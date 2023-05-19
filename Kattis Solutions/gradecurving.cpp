#include<bits/stdc++.h>
using namespace std;
int fmin(double x, int k, int yl, int yh) {
    double r1 = 10 * sqrt(x);
    int r2 = ceil(r1);
    //cout << yl << " " << r2 << " " << yh << endl;
    if (r2 <= yh && r2 >= yl) {
        return k;
    } else if (r2 > yh) {
        return -1;
    } else {
        return fmin(r1,k + 1,yl,yh);
    }
}
int fmax(double x, int k, int yl, int yh) {
    double r1 = 10 * sqrt(x);
    int r2 = ceil(r1);
    double r3 = 10 * sqrt(r1);
    int r4 = ceil(r3);
    //cout << yl << " " << r2 << " " << yh << endl;
    //cout << yl << " " << r4 << " " << yh << endl;
    if (r2 <= yh && r2 >= yl && r4 > yh) {
        return k;
    } else if ((r2 < yl && r4 > yh) || (r2 > yh)) {
        return -1;
    } else {
        return fmax(r1,k + 1,yl,yh);
    }
}
int main() {
    double x;
    int yl, yh, k = 1;
    cin >> x >> yl >> yh;
    int min = -2;
    if (yl <= x && x <= yh) {
        min = 0;
    } else {
        min = fmin(x,k,yl,yh);
    }
    int max = -2;
    if (yh != 100) {
        if (yl <= x && x <= yh) {
            max = 0;
        }
        max = ::max(max, fmax(x,k,yl,yh));
    }
    if ((min == -1 && max == -1)) {
        cout << "impossible" << endl;
        return 0;
    } else {
        cout << min << " ";
    }
    if (yh == 100) {
        cout << "inf" << endl;
    } else {
        cout << max << endl;
    }
    return 0;
}