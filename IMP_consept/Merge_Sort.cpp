#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int l,int r,int mid)
{
    int l_s = mid - l + 1 ;
    int r_s =  r - mid;
    int l_a[l_s+1],r_a[r_s+1];
    for(int i=0; i<l_s; i++)
        l_a[i] = a[l+i];
    for(int i=0; i<r_s; i++)    
        r_a[i] = a[mid+i+1];
    l_a[l_s] = r_a[r_s] = INT_MAX;

    int l_i=0,r_i=0;
    for(int i=l; i<=r; i++)
    {
        if(l_a[l_i] <= r_a[r_i])
        {
            a[i] = l_a[l_i];
            l_i++;
        }
        else    
        {
            a[i] = r_a[r_i];
            r_i++;
        }
    }
}

void merge_sort(int a[],int l,int r)
{
    if(l==r)
        return;
    int mid = (l+r)/2;
    merge_sort(a,l,mid);
    merge_sort(a,mid+1,r);
    merge(a,l,r,mid);
}

int main(){
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
    
    int n;
    cin>>n;
    int a[n];
    for(int &v : a)
        cin>>v;

    merge_sort(a,0,n-1);

    for(int v : a)
        cout<<v<<" ";

    return(0);
}