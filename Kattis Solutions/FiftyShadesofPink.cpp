#include<bits/stdc++.h>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    string name;
    int pink = 0;
    for (int i = 0; i < cases; i++) {
        cin >> name;
        for (int j = 0; j < name.size(); j++) {
            name[j] = tolower(name[j]);
        }
        if (name.find("pink") != string::npos || name.find("rose") != string::npos) {
            pink++;
        }
    }
    if (pink == 0) {
        cout << "I must watch Star Wars with my daughter" << endl;
    } else {
        cout << pink << endl;
    }
    return 0;
}