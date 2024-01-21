                        // ***  ... जय श्री राम ...  ***//
#include<bits/stdc++.h>
using namespace std;

#define ll            long long
#define all(x)        x.begin(),x.end()
#define for(i,a,b)    for(ll i = a ; i<b ; i++)
#define yes           cout<<"yes"<<endl
#define no            cout<<"no"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl


int main()
{
    ll t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    vector<ll> v1(n);
    vector<ll> v2(n);
    ll k = n;
    ll i = 0;
    while(k>0){
        cin>>v1[i];
        cin>>v2[i];
        // ll a,x;
        // cin>>a>>x;
        // v1.push_back(a);
        // v2.push_back(x);
        k--;
        i++;
    }
    ll count=0;
    ll maxi1 = INT_MIN;
    ll mini =INT_MAX;
    for(i,0,n){
        if(v1[i]==1){
            maxi1=max(maxi1,v2[i]);
        }
        if(v1[i]==2){
            mini=min(mini,v2[i]);
        }
    }
    vector<ll> m;
    for(i,0,n){
        if(v1[i]==3 ) m.push_back(v2[i]);
    }

//     cout<<"coutn  "<<count<<endl;
// cout<<maxi1<<" "<<maxi2<<endl;

set<ll> ss;
while(m.size()!=0){
    ll curr = m.back();
    m.pop_back();

    if(curr>=maxi1 && curr<=mini){
        ss.insert(curr);
    }
}
    if(maxi1>mini) cout<<0<<endl;
    else cout<<mini-maxi1+1-ss.size()<<endl;
    }
   
    return 0;
}