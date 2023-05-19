#include<bits/stdc++.h>
using namespace std;
int main() {
    string line;
    getline(cin, line);
    int count = 0;
    for (int i = 0; i < line.size(); i++) {
        if (i % 3 == 0 && line[i] != 'P') {
            count++;
        } else if (i % 3 == 1 && line[i] != 'E') {
            count++;
        } else if (i % 3 == 2 && line[i] != 'R') {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}