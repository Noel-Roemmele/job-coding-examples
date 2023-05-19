#include<bits/stdc++.h>
using namespace std;
int main() {
    string input;
    bool here = 0;
    vector<int> blimps;
    int i = 1;
    while (cin >> input) {
        if (input.find("FBI") != string::npos) {
            here = 1;
            blimps.push_back(i);
        }
        i++;
    }
    if (here) {
        for (int j = 0; j < blimps.size(); j++) {
            cout << blimps[j];
            if (j < blimps.size() - 1) {
                cout << " ";
            }
        }
    } else {
        cout << "HE GOT AWAY!" << endl;
    }
    return 0;
}