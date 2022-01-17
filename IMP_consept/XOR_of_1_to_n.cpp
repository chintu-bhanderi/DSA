#include<bits/stdc++.h>
using namespace std;

int computeXOR(int n)
{
  if (n % 4 == 0)
    return n;

  if (n % 4 == 1)
    return 1;
 
  if (n % 4 == 2)
    return n + 1;

  return 0;
}

int main(){
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
    
    return(0);
}