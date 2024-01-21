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
    // ll t;
    // cin>>t;
    // while(t--){
    // }
    ll n,k;
    cin>>n>>k;
    while(k--){
        if(n%10>0) n= n-1;
        else  n=n/10;
    }
    cout<<n<<endl;
    
    return 0;
}