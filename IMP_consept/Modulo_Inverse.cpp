#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
using namespace std;

//#define ordered_set1 tree<int,null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_set2 tree<int,null_type,greater<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_set3 tree<int,null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_set4 tree<int,null_type,greater_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ll long long
ll M = 1e9+7;

ll power(ll a,ll n)
{
    ll res = 1;
    // cout<<n<<" ";
    while(n>0)
    {
        if(n%2)
            res = (res * a)%M;
        n /= 2;
        a = (a * a)%M;
        // cout<<1<<" ";
    }
    return res;
}

int main(){
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
    ll a;
    cin>>a;

    ll Po = power(a,M-2);

    cout<<Po;

    return(0);
}