#include<bits/stdc++.h>
using namespace std;

#define ll            long long
#define all(x)        sort(x.begin(),x.end())
// #define for(i,a,b)    for(int i = a ; i<b ; i++)

int main()
{

    ll n,q;
    cin>>n>>q;
    vector<ll> v(n);
    for(ll i = 0 ; i<n ; i++){
        cin>>v[i];
    }
    all(v);
    
    vector<ll> f(n+1);
    f[0]=v[0];
    for(ll i =1 ; i<=n ; i++){
    f[i]=f[i-1]+v[i-1];
    }

    for(ll i = 0 ; i<q ; i++){
    ll x,y;
        cin>>x>>y;
        
    
        cout<<f[n-x+y]-f[n-x]<<endl; 
    }
    // while(q>=1){
        
    //     q--;
    // }
       
 
return 0;
}