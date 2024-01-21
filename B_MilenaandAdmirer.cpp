#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0 ; i<n ; i++)
    {
       
        cin>>v[i];
       
    }
    ll ans = 0;
    ll next = INT_MAX;
    
    
   for(int i = n-1; i>=0 ; i--)
   {
    if(v[i]<=next){
        next = v[i];
    }
    else {
        ll x = (v[i] + (next-1))/next;
        ans = ans + (x-1);
        next = v[i]/x;
    }
   }
   cout<<ans<<endl;
 }
return 0;
}