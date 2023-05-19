#include<bits/stdc++.h>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    double g = 9.81;
    double v0, theta, x1, h1, h2;
    for (int i = 0; i < cases; i++) {
        cin >> v0 >> theta >> x1 >> h1 >> h2;
        theta = (M_PI / 180) * theta;
        double time = x1 / (v0 * cos(theta));
        double y1 = (v0 * time * sin(theta)) - ((1.0/2.0) * g * pow(time, 2));
        if (y1 > (h1 + 1) && y1 < (h2 - 1)) {
            cout << "Safe" << endl;
        } else {
            cout << "Not Safe" << endl;
        }
    }
    return 0;
}