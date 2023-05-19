#include<bits/stdc++.h>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    string line;
    getline(cin, line);
    while (cases--) {
        getline(cin, line);
        if (string(line.begin(), line.begin() + 10) == "Simon says") {
            cout << string(line.end() - (line.size() - 10), line.end()) << endl;
        }
    }
    return 0;
}