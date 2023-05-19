#include<bits/stdc++.h>
using namespace std;
int main() {
  int c = 0;
  cin >> c;
  while (c--) {
    int n = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    priority_queue<int> left;
    priority_queue<int, vector<int>, greater<int>> right;
    left.push(a[0]);
    long long int sum = 0;
    for (int i = 1; i <= n; i++) {
      if (i % 2 == 0) {
        sum += (left.top() + right.top()) / 2;

      } else {
        sum += left.top();
      }
      if (i != n) {
        if (a[i] > left.top()) {
          right.push(a[i]);
        } else {
          left.push(a[i]);
        }
        if (left.size() <= right.size()) {
          left.push(right.top());
          right.pop();
        }
        if (left.size() - 1 > right.size()) {
          right.push(left.top());
          left.pop();
        }
      }
    }
    cout << sum << endl;
  }
  return 0;
}