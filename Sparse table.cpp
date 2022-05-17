#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
#define ll long long

vector<vector<int>>table;

int Log(int x){
    return 31-__builtin_clz(x);
}


vector<vector<int>> buildTable(vector<int>&arr){
    int n=arr.size();
    vector<vector<int>>table(n, vector<int>(Log(n)+1));
    for(int i=0; i<n; i++) table[i][0]=arr[i];

    for(int j=1; (1<<j)<=n; j++)
        for(int i=0; i+(1<<j)-1<n; i++)
            table[i][j]=min(table[i][j-1], table[i+(1<<(j-1))][j-1]);

    return table;
}


int query(int l, int r){



    int len=r-l+1, st=l, mn=INT_MAX;  // standard O(log n)
     for(int j=0; (1<<j)<=len; j++){
      if(len & (1<<j)){
         mn=min(mn,table[st][j]);
         st+=(1<<j);
       }
     }
     return mn;


    /* int len=r-l+1; // when overlapping is ok O(1)
    int j=Log(len);
    return min(table[l][j], table[r-(1<<j)+1][j]);*/
}


int main(){

    int n;
    cin >> n;
    vector<int>arr(n);
    for(auto &i : arr) cin >> i;
    vector<vector<int>>table = buildTable(arr);

}
