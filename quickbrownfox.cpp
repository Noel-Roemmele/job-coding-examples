#include<bits/stdc++.h>
using namespace std;
int main() {
    int cases = 0;
    bool a[26] = {false};
    string data = "";
    cin >> cases;
    getline(cin, data);
    while (cases--) {
        getline(cin, data);
        transform(data.begin(), data.end(), data.begin(), [](unsigned char c)
        { return std::tolower(c); });
        for (int i = 0; i < data.size(); i++) {
            a[data[i] - 'a'] = true;
        }
        bool p = true;
        string m = "";
        for (int i = 0; i < 26; i++) {
            if (!a[i]) {
                p = false;
                m += 'a' + i;
            }
            a[i] = false;
        }
        if (p) {
            cout << "pangram" << endl;
        } else {
            cout << "missing " << m << endl;
        }
    }
    return 0;
}