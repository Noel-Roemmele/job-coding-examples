#include<bits/stdc++.h>
using namespace std;
int main() {
    int w;
    cin >> w;
    int p;
    cin >> p;
    int a = 0;
    for (int i = 0; i < p; i++) {
        int pw, pl;
        cin >> pw >> pl;
        a += (pw * pl);
    }
    cout << a / w << endl;
    return 0;
}