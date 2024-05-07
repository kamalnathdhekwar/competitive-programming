             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

// #define ll         long long int
#define ll            int64_t
#define all(x)        x.begin(),x.end()
#define rall(x)       x.begin(),x.end()
// #define for(i,a,b)    for(ll i = a ; i<b ; i++)
// #define forr(j,c,d)   for(ll j = c ; j>=d ; j--)
#define yes           cout<<"Yes"<<endl
#define no            cout<<"No"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl
#define mvi           vector<ll>
#define mvc           vector<char>
#define mvs           vector<string>
#define mpi           map<ll,ll>
#define mps           map<string,string>
#define umpi          map<string,string>
#define umps          map<ll,ll>
#define nn            cout<<endl

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    ll p;
    cin>>p;

    mvi x(p) ,y(p);
    
    for(ll i = 0 ; i<p ; i++) cin>>x[i];
    for(ll i = 0 ; i<p ; i++) cin>>y[i];

    mpi mp;

    for(auto k:x) mp[k]++;
    for(auto k:y) mp[k]++;

    if(mp.size()==n) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";

    nn;


    
    return 0;
}