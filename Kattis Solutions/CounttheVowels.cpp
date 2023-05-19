#include<bits/stdc++.h>
using namespace std;
int main() {
    string line;
    getline(cin, line);
    int count = 0;
    bool s[123] = {0};
    s['A'] = true;
    s['a'] = true;
    s['E'] = true;
    s['e'] = true;
    s['I'] = true;
    s['i'] = true;
    s['O'] = true;
    s['o'] = true;
    s['U'] = true;
    s['u'] = true;
    for (int i = 0; i < line.size(); i++) {
        if (s[line[i]]) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}