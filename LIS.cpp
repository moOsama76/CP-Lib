#include<bits/stdc++.h>
using namespace  std;
#define ll long long
int n;
vector<int>a;
const int MAX = 1e3, MAXVAL = 1e5;
int dp[MAX][MAXVAL];

int LIS(int idx, int pre)
{
    if (idx == n) return 0;
    if(dp[idx][pre] != -1) return dp[idx][pre];
    int leave = LIS(idx+1, pre);
    int pick = 0;
    if (a[idx] > pre)
        pick = 1+LIS( idx+1, a[idx]);
    return dp[idx][pre] =  max(pick, leave);
}


int main() {

}
