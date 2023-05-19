#include<bits/stdc++.h>
using namespace std;
int main() {
    int g, s, c;
    cin >> g >> s >> c;
    int b = (g * 3) + (s * 2) + c;
    string t = "";
    if (b < 3) {
        t = "Copper";
    } else if (b < 6) {
        t = "Silver";
    } else {
        t = "Gold";
    }
    string v = "";
    if (b < 2) {
    } else if (b < 5) {
        v = "Estate";
    } else if (b < 8) {
        v = "Duchy";
    } else {
        v = "Province";
    }
    if (v == "") {
        cout << t << endl;
    } else {
        cout << v << " or " << t << endl; 
    }
    return 0;
}