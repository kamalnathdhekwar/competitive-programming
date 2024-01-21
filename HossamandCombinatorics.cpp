
#include<bits/stdc++.h>
using namespace std;

#define ll            long long
#define all(x)        sort(x.begin(),x.end())
#define for(i,a,b)    for(ll i = a ; i<b ; i++)

int main()
{
 ll t;
 cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<ll> mv(n);
   
    for(i,0,n) {
        cin>>mv[i];
    }
    all(mv);
    
    // ll tmp = (mv[n-1]-mv[0]);
    ll low = mv[0];
    ll high = mv[n-1];
    ll count=0;
    // ll i = 0;
    // ll j = n-1;
    ll mini=1,maxi=1;
    for(i,1,n-1){
        if(low==mv[i]) mini++;
        if(high==mv[i]) maxi++;

    }

    // time limit for the follwing code
    // for(i,0,n){
    //      for(j, 0, n){
    //         if(i!=j && abs(mv[i]-mv[j])==tmp) count++;
    //     }

    // }
   if(mv[0]==mv[n-1]) cout<<n*(n-1)<<endl;        
   else cout<<mini*maxi*2<<endl;


} 
       
 
return 0;
}