#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
vector<bool>prime(N+1, 1);

void sieve(){
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= N; i++)
    {
        if (prime[i] == true)
            for (int j = i * i; j <= N; j += i)
                prime[j] = false;
    }
}

int main()
{

}
