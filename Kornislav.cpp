#include<bits/stdc++.h>
using namespace std;
int main() {
    priority_queue<int> q1;
    priority_queue<int, std::vector<int>, std::greater<int>> q2;
    int input;
    while (cin >> input) {
        q1.push(input);
        q2.push(input);
    }
    q1.pop();
    cout << q2.top() * q1.top() << endl;
    return 0;
}