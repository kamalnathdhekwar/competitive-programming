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
    string str;
    cin>>str;
    
    ll dot = 0;
    // ll has = 0;
    for(i,0,n){
        if(str[i]=='.') dot++;
    }
    ll cdot =1;
     for(i,0,n-1){
        if(cdot>=3) break;
        if(str[i]=='.' && str[i+1]=='.') {
        cdot++;
        }
        else {
            cdot=1;
            continue;
        }
    }
    // the logic is ... if there is any countinuous three dots then ans is always 2,,, the ans will no of dots
    if(cdot>=3) cout<<2<<endl;
    else if(dot==0) cout<<0<<endl;
    else cout<<dot<<endl;

} 
       
 
return 0;
}