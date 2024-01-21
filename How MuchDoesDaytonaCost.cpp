                        // ***  ... जय श्री राम ...  ***//
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
#define for(i,a,b)    for(ll i = a ; i<b ; i++)
#define yes           cout<<"yes"<<endl
#define no            cout<<"no"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl
#define p1            cout<<1<<endl
#define p0            cout<<0<<endl

int main()
{
    ll t;
    cin>>t;
    while(t--){
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(i,0,n){
        cin>>v[i];
    }
    ll flag=0;
    for(i,0,n){
        if(v[i]==k){
            flag =1;
            break;
        }

    }
    if(flag==1) yes;
    else no;

    }
    
    return 0;
}