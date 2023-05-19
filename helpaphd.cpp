#include<bits/stdc++.h>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        string n;
        cin >> n;
        if (n[0] == 'P') {
            cout << "skipped" << endl;
            continue;
        }
        int s = 0;
        for (int j = 0; j < n.size(); j++) {
            if (n[j] == '+') {
                s = stoi(string(n.begin(), n.begin() + j)) + 
                stoi(string(n.begin() + j + 1, n.end()));
            }
        }
        cout << s << endl;
    }
    return 0;
}