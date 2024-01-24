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
        ll n ;
        cin>>n;
        mvi v(n);
        for(i,0,n){
            cin>>v[i];
        }
        ll c=0,s=1;
        for(i,0,n-1){
            if(v[i]==v[i+1]) s++;
            if(v[i]>v[i+1]) c++;
        }

        if(c>0){
            cout<<0<<endl;
        }
        else if(s==n) cout<<1<<endl;
        else {
            
            ll mini = INT_MAX;

            for(i,0,n-1){
                mini = min(mini,v[i+1]-v[i]);
            }

            cout<<mini/2+1<<endl;
        }
    }
    
    return 0;
}
