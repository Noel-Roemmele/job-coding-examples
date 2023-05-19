#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (cin >> n && n != -1) {
        vector<vector<int>> g(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> g[i][j];
            }
        }
        vector<int> t;
        for (int i = 0; i < n; i++) {
            vector<int> m;
            for (int j = 0; j < n; j++) {
                if (g[i][j]) {
                    m.push_back(j);
                }
            }
            bool found = 0;
            if (m.size() > 1) {
                for (int j = 0; j < m.size(); j++) {
                    for (int k = j + 1; k < m.size(); k++) {
                        if (g[m[j]][m[k]]) {
                            t.push_back(i);
                            found = 1;
                            break;
                        }
                    }
                    if (found) {
                        break;
                    }
                }
            }
        }
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (j < t.size() && t[j] == i) {
                j++;
            } else {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}