#include<bits/stdc++.h>
using namespace std;
int main() {
    string code = "";
    string output = "";
    getline(cin, code);
    for (int i = 0; i < code.size(); i++) {
        if (code[i] == 'a' || code[i] == 'e' || code[i] == 'i' || code[i] == 'o' ||
        code[i] == 'u') {
            i+= 2;
        }
        output += code[i];
    }
    cout << output << endl;
    return 0;
}