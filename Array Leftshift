#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>a;

vector<int> circularLeftShift(int l, int r, int ls){
    vector<int>bbbbbb = a;
    ls %= (r-l+1);
    for(int i = l; i <= r; i++){
        if(i-ls >= l){
            bbbbbb[i-ls] = a[i];
        } else {
            bbbbbb[i-ls+r-l+1] = a[i];
        }
    }
    return bbbbbb;
}

int main()
{


}
