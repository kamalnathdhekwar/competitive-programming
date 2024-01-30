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
#define NO            cout<<"NO"<<endl\

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
        ll n;
        cin>>n;
        mvi a(n);
        mvi b(n);

        for(i,0,n){
            cin>>a[i];
        }

         for(i,0,n){
            cin>>b[i];
        }

     ll ca=0;
     ll cb = 0;
     
     vector<pair<ll,ll>> x;
     
     for(i,0,n){
        x.push_back(make_pair(a[i],b[i]));
     }
        
    sort(x.begin(),x.end());

        for(i,0,n){
            cout<<x[i].first<<" ";
        }
        nn;
        for(i,0,n){
            cout<<x[i].second<<" ";
        }
        nn;

    }
    
    return 0;
}
