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
        string s1,s2;
        cin>>s1>>s2;
        ll c1=0,c2=0;
        for(i,0,n){
            if(s1[i]=='0' && s2[i]=='1') c1++;
            if(s1[i]=='1' && s2[i]=='0') c2++;
        }

        cout<<max(c1,c2)<<endl;

    }
    
    return 0;
}
