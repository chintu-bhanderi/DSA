#include<bits/stdc++.h>
using namespace std;

#define lld long long int

lld cal_power(int base,int n)
{
    lld ans = 1;
    while (n)
    {
        if(n%2==0)
        {
            base *= base;
            n /= 2;
        }
        else
        {
            ans *= base;
            n--;
        }
    }
    return ans;
}

int main(){
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
    // cout<<cal_power(9,10);
    cout<<pow(9,10);
    return(0);
}