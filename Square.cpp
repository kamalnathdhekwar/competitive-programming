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
        vector<int>v1;
        vector<int>v2;
        ll k = 4;
        while(k--){
            ll x,y;
            cin>>x>>y;
            v1.push_back(x);
            v2.push_back(y);
        }
        sort(all(v1));
        ll key = abs(v1[0]-v1[3]);
        cout<<key*key<<endl;
    }
    
    return 0;
}