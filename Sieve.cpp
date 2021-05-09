#include <bits/stdc++.h>
using namespace std;

const int n = 1000;
vector<bool>prime(n+1, 1);

void sieve(){
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == true)
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
    }
}

int main()
{

}
