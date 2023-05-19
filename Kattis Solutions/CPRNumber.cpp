#include<bits/stdc++.h>
using namespace std;
int main() {
    string n;
    int num[10] = {4,3,2,7,6,5,4,3,2,1};
    cin >> n;
    n.erase(n.begin() + 6);
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += num[i] * (n[i] - '0');
    }
    if (sum % 11 == 0) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
    return 0;
}