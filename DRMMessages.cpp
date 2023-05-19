#include<bits/stdc++.h>
using namespace std;
int main() {
    string input;
    cin >> input;
    string fh = input.substr(0, input.size() / 2);
    string sh = input.substr(input.size() / 2, input.size());
    int s1 = 0;
    for (int i = 0; i < fh.size(); i++) {
        s1 = ((fh[i] - 'A') + s1) % 26;
    }
    int s2 = 0;
    for (int i = 0; i < sh.size(); i++) {
        s2 = ((sh[i] - 'A') + s2) % 26;
    }
    for (int i = 0; i < fh.size(); i++) {
        fh[i] = (((fh[i] - 'A') + s1) % 26) + 'A';
    }
    for (int i = 0; i < sh.size(); i++) {
        sh[i] = (((sh[i] - 'A') + s2) % 26) + 'A';
    }
    for (int i = 0; i < fh.size(); i++) {
        fh[i] = (((fh[i] - 'A') + (sh[i] - 'A')) % 26) + 'A';
    }
    cout << fh << endl;
    return 0;
}