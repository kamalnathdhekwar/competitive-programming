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
        ll n,k;
        cin>>n>>k;

        mvi v(n);
        
        for(i,0,n){
            cin>>v[i];
        }
       ll count = 0;
        for(i,0,n){
            for(j,i+1,n){
                if(abs(v[i]-v[j])<=k) count++;
            }
        }
        
        if(n==1 || count==n-1) cout<<0<<endl;
        else cout<<abs(count)<<endl;
        nn;
        
    }
    
    return 0;
}