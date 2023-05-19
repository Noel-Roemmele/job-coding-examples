#include<bits/stdc++.h>
using namespace std;
int main() {
    string names[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", 
    "Friday", "Saturday"};
    int mm, dd;
    cin >> dd >> mm;
    int a = (14 - mm) / 12;
    int y = 2009 - a;
    int m = mm + 12 * a - 2;
    cout << names[((dd + y + y/4 - y/100 + y/400 + 31 * m / 12) % 7)] << endl;
    return 0;
}