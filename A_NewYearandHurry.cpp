#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,k;
    cin>>n>>k;
    ll sum=0;
    int timeReq=240-k;
    int i=1;
   
    for( i = 1; i<=n ; i++)
    {
     sum=sum+5*i;
     if(sum>timeReq) break;
     
   
    }
    cout<<i-1;
    return 0;
}