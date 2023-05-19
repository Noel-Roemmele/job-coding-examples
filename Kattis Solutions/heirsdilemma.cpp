#include<bits/stdc++.h>
using namespace std;
int main() {
    int l, h;
    cin >> l >> h;
    string n = "";
    bool flag = true;
    int count = 0;
    for (int i = l; i <= h; i++) {
        flag = true;
        n = to_string(i);
        for (int j = 0; j < n.size(); j++) {
            if (n[j] == '0') {
                flag = false;
            }
        }
        for (int j = 0; j < n.size(); j++) {
            for (int k = j + 1; k < n.size(); k++) {
                if (n[j] == n[k]) {
                    flag = false;
                }
            }
        }
        for (int j = 0; j < n.size(); j++) {
            if ((n[j] - '0') != 0 && i % (n[j] - '0') != 0) {
                flag = false;
            }
        }
        if (flag) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}