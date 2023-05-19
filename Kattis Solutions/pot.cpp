#include<bits/stdc++.h>
using namespace std;
signed long long int power (int a, int b) {
    signed long long int x = 1;
    while (b--) {
        x *= a;
    }
    return x;
}
int main()
{
   int num1;
   int num2;
   int num3;
   int num4;
   signed long long int ans;
   signed long long int out = 0;
   int n;
   cin >> n;
   for(int i = 0; i < n; i++) {
      cin >> num1;
      num2 = num1;
      num2 /= 10;
      num2 *= 10;
      num3 = num1 - num2;
      num4 = num2 / 10;
      ans = power(num4, num3);
      out += ans;
   }
   cout << out << endl;
   return 0;
}
