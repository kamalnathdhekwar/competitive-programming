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

        ll n;
        cin>>n;
        ll arr[n][n];
        
        vector<ll> v;

        for(i,0,n){

            string s;
            cin>>s;
             
            ll one = 0;
            for(i,0,n){
                if(s[i]=='1') one++;
            }
            
            if(one>0) v.push_back(one);
        }
       
        
        ll kk = v.size();

        if(v[0]==v[1]) cout<<"SQUARE"<<endl;
        else cout<<"TRIANGLE"<<endl;

    }
    
return 0;
}