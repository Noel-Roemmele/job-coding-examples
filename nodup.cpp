#include<bits/stdc++.h>
using namespace std;
int main() {
    set<string> p;
    string w = "";
    int n = 0;
    while (cin >> w) {
        p.insert(w);
        n++;
    }
    if (p.size() == n) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    
    return 0;
}