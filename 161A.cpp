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
        ll n;
        cin>>n;
        string a,b,c;
        cin>>a>>b>>c;
        ll count = 0;
        ll count2 = 0;
        for(i,0,n){
            if(a[i]==c[i] || b[i]==c[i]) count++;
        }

        if(count==n) no;
        else yes;
    }
    
    return 0;
}
