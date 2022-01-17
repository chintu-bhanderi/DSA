#include<bits/stdc++.h>
using namespace std;

bool find_ele(ll a[], ll val, ll n)
{
    ll l = 0, r = n - 1, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (a[mid] == val)
            return true;
        else if (val < a[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }
    return false;
}

ll next_grater(ll arr[], ll target, ll end)
{
    ll start = 0;

    ll ans = -1;
    while (start <= end)
    {
        ll mid = (start + end) / 2;

        // Move to right side if target is
        // greater.
        if (arr[mid] <= target)
            start = mid + 1;

        // Move left side.
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }

    return ans;
}

ll next_smaler(ll arr[], ll target, ll end)
{
    // Minimum size of the array should be 1
    if (end == 0)
        return -1;
    // If target lies beyond the max element, than the index of strictly smaller
    // value than target should be (end - 1)
    if (target > arr[end - 1])
        return end - 1;

    ll start = 0;

    ll ans = -1;
    while (start <= end)
    {
        ll mid = (start + end) / 2;

        // Move to the left side if the target is smaller
        if (arr[mid] >= target)
        {
            end = mid - 1;
        }

        // Move right side
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}


// int lower = lower_bound(a.begin(), a.end(), x) - a.begin();
// this lower represent index of lower ele.

// int upper = upper_bound(a.begin(), a.end(), x) - a.begin();
// this upper represent index of upper ele.



int main(){
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
    
    return(0);
}