#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<char> num;
    char input;
    while (cin >> input) {
        num.push_back(input);
    }
    if (next_permutation(num.begin(), num.end())) {
        for (int i = 0; i < num.size(); i++) {
            cout << num[i];
        }
    } else {
        cout << 0 << endl;
    }
    return 0;
}