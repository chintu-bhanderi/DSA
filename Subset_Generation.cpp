#include<bits/stdc++.h>
using namespace std;

void Subset_Generation(vector<vector<int>> &v,vector<int> &nums,int n)
{
    if(n==nums.size())  
        return ;
    int i=0; 
    int x = v.size();
    vector<int> copy;
    while(i<x)
    {
        copy = v[i++];
        copy.push_back(nums[n]);
        v.push_back(copy);
    }
    Subset_Generation(v,nums,n+1);
}

int main(){
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
    vector<int> nums = {1,2,3};
    vector<vector<int>> v;
    v.push_back({});
    Subset_Generation(v,nums,0);
    for(auto i : v)
    {
        for(auto j : i)
            cout<<j<<" ";
        cout<<endl;
    }
    return(0);
}