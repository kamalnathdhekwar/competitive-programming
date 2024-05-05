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

    ll t;
    cin>>t;
    while(t--){
         ll x,y,n;
         cin>>x>>y>>n;
         
         ll ans = 0;
         for(ll i = n ; i>=0 ; i--){
            if(i%x==y){
                ans = i;
                break;
            }
         }

         cout<<ans<<endl;
         nn;
    }


    
    return 0;
}