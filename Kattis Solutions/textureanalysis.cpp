#include<bits/stdc++.h>
using namespace std;
void solve(string in, int i) {
    int gapSize = -1;
    int preStar = 1;
    for(int j = 1; j < in.size(); j++) {
        if (in[j] == '*') {
            int gap = j - preStar;
            preStar = j + 1;
            if (gapSize == -1) {
                gapSize = gap;
            }
            if (gap != gapSize) {
                cout << i << " NOT EVEN" << endl;
                return;
            }
        }
    }
    cout << i << " EVEN" << endl;
    return;
}
int main() {
    //Measure gap size and take in first gap size and check each time 
    //if the next is equal
    string in;
    int i = 1;
    while(cin >> in && in != "END") {
        solve(in, i);
        i++;
    }
    return 0;
}