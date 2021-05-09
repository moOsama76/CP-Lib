#include <bits/stdc++.h>
using namespace std;

const int m = 1e+9 + 7
  
int sum(int a, int b) {
    a = (a % m + m) % m;
    b = (b % m + m) % m;
    return (a + 0LL + b) % m;
}
 
int mul(int a, int b) {
    a = (a % m + m) % m;
    b = (b % m + m) % m;
    return (a * 1LL * b) % m;
}
 
int power(int x, int y) {
    if (y == 0) return 1;
    int temp = power(x, y / 2);
    if (y % 2 == 0) return mul(temp, temp);
    return mul(mul(x, temp), temp);
}
 
int modInverse(int x) {
    return power(x, m - 2);
}
  
int nCr(int n, int r) {
    return mul(fact[n], modInverse(mul(fact[r], fact[n - r])));
}

int main()
{

}
