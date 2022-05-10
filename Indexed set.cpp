#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
using namespace std;
using namespace __gnu_pbds;
#define ll long long


typedef tree<
        int,
        null_type,
        less<int>, // less_equal -> multiset (upperbound, lowerbound are reversed)
        rb_tree_tag,
        tree_order_statistics_node_update>
        ordered_set;


int main(){
    ordered_set s;
}
