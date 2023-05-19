#include<bits/stdc++.h>
using namespace std;
int main() {
    int s, t, n;
    cin >> s >> t >> n;
    vector<int> walk;
    vector<int> busTime;
    vector<int> busArr;
    int input;
    for (int i = 0; i < n + 1; i++) {
        cin >> input;
        walk.push_back(input);
    }
    for (int i = 0; i < n; i++) {
        cin >> input;
        busTime.push_back(input);
    }
    for (int i = 0; i < n; i++) {
        cin >> input;
        busArr.push_back(input);
    }
    int time = s;
    for (int i = 0; i < n; i++) {
        time += walk[i];
        while (time % busArr[i] != 0) {
            time++;
        }
        time += busTime[i];
    }
    time += walk[n];
    if (time > t) {
        cout << "no" << endl;
    } else {
        cout << "yes" << endl;
    }
    return 0;
}