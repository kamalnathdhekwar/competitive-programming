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
#define inv           cin>>v[i]   
#define otv           cout<<v[i] 

int main()
{
    // ll t;
    // cin>>t;
    // while(t--){
        
    // }
    ll n;
    cin>>n;
    mvi v(n);
    ll flag =0;
    ll  pm=INT_MAX, nm = INT_MIN;
    ll kk = 0;
    for(i,0,n){
        inv;
        if(v[i]==0) flag = 1;
        if(v[i]>0) pm =min(pm,v[i]);
        if(v[i]<0) {
            kk=1;
            nm =max(nm,v[i]);
        }
    }
   
   ll key;
    if(kk==1){
        key = min(pm,-nm);
    }
    else key = pm;

     if(flag==1 ) cout<<0<<endl;
     else  cout<<key<<endl;
    
    
    return 0;
}