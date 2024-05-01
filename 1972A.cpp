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

bool check(vector<ll> a,vector<ll> b){
    for(i,0,a.size()){
        if(a[i]>b[i]) return false;
    }

    return true;
}

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        mvi a(n);
        mvi b(n);

    for(i,0,n) cin>>a[i];
    for(i,0,n) cin>>b[i];
    
    ll count = 0;
    
    ll i = 0;
    while(true){
        if(check(a,b)) break;

        count++;
        
        a.push_back(b[i]);
        sort(all(a));
        a.pop_back();
    }

    cout<<count<<endl;

    }


    
    return 0;
}