             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
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
        ll a,b,c;
        cin>>a>>b>>c;
        ll x = abs(c-b)+c;
        // if(b==1) cout<<2<<endl;
        // else if(a<2*(b-c)) cout<<1<<endl;
        // else if(a==2*(b-c)) cout<<3<<endl;
        // else cout<<2<<endl;

        if(x==a) cout<<3<<endl;
        else if(a<x) cout<<1<<endl;
        else cout<<2<<endl;
        nn;
        
    }
    
    return 0;
}