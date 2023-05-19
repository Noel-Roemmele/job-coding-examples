#include<bits/stdc++.h>
using namespace std;
int main() {
    map<string, string> teams;
    vector<string> schoolorder;
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        string school, name;
        cin >> school >> name;
        if (!(teams.count(school))) {
            teams[school] = name;
            schoolorder.push_back(school);
        }
    }
    for (int i = 0; i < 12; i++) {
        cout << schoolorder[i] << " " << teams[schoolorder[i]] << endl;
    }
    return 0;
}