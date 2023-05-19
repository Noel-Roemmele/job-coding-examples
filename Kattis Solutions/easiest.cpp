#include<bits/stdc++.h>
using namespace std;
int digitSum(int num) {
    int sum = 0;
    while (num) {
        sum += (num % 10);
        num = num / 10;
    }
    return sum;
}
int main() {
    int n;
    while (cin >> n && n != 0) {
        int i = 11;
        while (true) {
            if ((n % 9) == ((n * i) % 9)) {
                if (digitSum(n) == digitSum(n * i)) {
                    cout << i << endl;
                    break;
                }
            }
            i++;
        }
    }
    return 0;
}