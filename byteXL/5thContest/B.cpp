             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
// #define for(i,a,b)    for(ll i = a ; i<b ; i++)
// #define forr(j,c,d)   for(ll j = c ; j>=d ; j--)
#define yes           cout<<"yes"<<endl
#define no            cout<<"no"<<endl
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
       for(int i = 0 ; i<n ; i++){
            cin>>v[i];
        }
        
        mpi mp;

        for(auto x : v){
            mp[x]++;
        }

        for(auto x: mp){
            if(x.second==1) cout<<x.first<<" ";
        }

        nn;

        
    
    return 0;
}