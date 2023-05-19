#include<bits/stdc++.h>
using namespace std;
int main() {
    string name = "";
    map<string, int> vote;
    set<string> c;
    getline(cin, name);
    while (name != "***") {
        if (vote.find(name) == vote.end()) {
            vote[name] = 1;
        } else {
            vote[name]++;
        }
        c.insert(name);
        getline(cin, name);
    }
    int max = -1;
    bool tie = false;
    string maxn = "";
    for (auto &i : c) {
        if (vote[i] == max) {
            tie = true;
        }
        if (vote[i] > max) {
            max = vote[i];
            maxn = i;
            tie = false;
        }
    }
    if (!tie) {
        cout << maxn << endl;
    } else {
        cout << "Runoff!" << endl;
    }
    return 0;
}