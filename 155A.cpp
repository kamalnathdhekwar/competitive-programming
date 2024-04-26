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
    ll n;
    cin>>n;
    mvi v(n);

    for(i,0,n) cin>>v[i];
    
    ll c1=0;
    ll c2=0;
    
    for(i,0,n-1){
    if(v[i]<v[i+1]) {
        c1++;
        continue;
    }

    if(v[i]>v[i+1]){
         c2++;
         continue;
    }
    }

    cout<<(c1+c2)/2<<endl;
    
    return 0;
}