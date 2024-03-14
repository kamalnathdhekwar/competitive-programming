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
#define all(x)        x.begin(),x.end()
#define mae(x)        max_element( x.begin(),x.end())
#define mie(x)        min_element( x.begin(),x.end())

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        mvi v(n);
        for(i,0,n) cin>>v[i];

        ll maxi = 0;

        for(i,0,n){
            maxi = max(maxi,v[i]-v[0]);
            maxi = max(maxi,v[n-1]-v[i]);
            maxi = max(maxi,v[i]-v[(i+1)%n]);

        }
       
       cout<<maxi<<endl;
        
    }


    
    return 0;
}