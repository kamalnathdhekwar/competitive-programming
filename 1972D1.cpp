             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
#define rall(x)       x.begin(),x.end()
#define for(i,a,b)    for(ll i = a ; i<b ; i++)
#define forr(j,c,d)   for(ll j = c ; j>=d ; j--)
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

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;

        mvi a;
        mvi b;
        
        for(i,0,n) a.push_back(i+1);
        for(i,0,m) b.push_back(i+1);

        sort(all(a));
        sort(all(b));
        

        ll c = 0;
        for(i,0,n){
           for(j,0,m){
            ll x = b[j]*(__gcd(a[i],b[j]));
            ll y = a[i]+b[j];
            if(y%x==0) c++;
           }
        }

        cout<<c<<endl;

        nn;
    }


    
    return 0;
}