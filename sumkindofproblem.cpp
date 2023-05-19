#include<bits/stdc++.h>
using namespace std;
int pos(int n) {
    int add = 1;
    int sum = 0;
    while(n--) {
        sum += add;
        add++;
    }
    return sum;
}
int odd(int n) {
    int add = 1;
    int sum = 0;
    while(n--) {
        sum += add;
        add += 2;
    }
    return sum;
}
int even(int n) {
    int add = 2;
    int sum = 0;
    while(n--) {
        sum += add;
        add += 2;
    }
    return sum;
}
int main() {
    int c;
    cin >> c;
    while (c--) {
        int k, n;
        cin >> k >> n;
        cout << k << " " << pos(n) << " " << odd(n) << " " << even(n) << endl;
    }
    return 0;
}