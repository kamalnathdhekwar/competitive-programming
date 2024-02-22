// ***  ... जय श्री राम ...  ***//
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
#define for(i,a,b)    for(ll i = a ; i<b ; i++)
#define forr(j,c,d)   for(ll j = c ; j>=d ; j--)
#define yes           cout<<"yes"<<endl
#define no            cout<<"no"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl
#define mvi           vector<ll>
#define mvs           vector<string>
#define mpi           map<ll,ll>
#define mps           map<string,string>
#define umpi          map<string,string>
#define umps          map<ll,ll>
#define nn            cout<<endl
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        ll ct = 0;
        mvi v(n);
        mvi pre(n);

        for(i,0,n){
            cin>>v[i];
        }
        pre[0]=v[0];

        // make prefix sum array  ...
        for(i,1,n){
            pre[i]=v[i]+pre[i-1];
        }

        
        while(q--){
            ll l,r,k;
            cin>>l>>r>>k;
            
        
        }


   nn;
      
    } 

    
return 0;
}