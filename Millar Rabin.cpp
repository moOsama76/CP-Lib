#include <bits/stdc++.h>
using namespace std;


int mul(int a, int b, int m) {
    a = (a % m + m) % m;
    b = (b % m + m) % m;
    return (a * 1LL * b) % m;
}

int power(int x, int y, int m) {
    if (y == 0) return 1;
    int temp = power(x, y / 2, m);
    if (y % 2 == 0) return mul(temp, temp, m);
    return mul(mul(x, temp, m), temp, m);
}


bool millerTest(int n)
{
    if(n == 1 || n == 4) return false;
    if(n == 2 || n == 3) return true;
    int d = n - 1;
    while (d % 2 == 0)
        d /= 2;
    int a = 2 + rand() % (n - 4);
    int x = power(a, d, n);
    if (x == 1  || x == n-1) return true;
    while (d != n-1)
    {
        x = (x * x) % n;
        d *= 2;

        if (x == 1) return false;
        if (x == n-1) return true;
    }
    return false;
}



int main()
{

}
