#include<bits/stdc++.h>
using namespace std;
int main() {
    int cases = 0;
    cin >> cases;
    string line;
    getline(cin, line);
    while (cases--) {
        getline(cin, line);
        int n = sqrt(line.size());
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << line[((j * n) + (n - i)) - 1];
            }
        }
        cout << endl;
    }
    return 0;
}