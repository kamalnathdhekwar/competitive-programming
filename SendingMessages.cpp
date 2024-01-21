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
        ll n,f,a,b;
        cin>>n>>f>>a>>b;
        vector<ll> v(n);
        
        for(i,0,n){
            cin>>v[i];
       }
      
    //   ll first = v[0]*a;
    //   ll mini = min(first,b);
    //   ll currf = f-mini;
     ll flag = 0;
     ll first = 0;
      for(i,0,n){
        
        ll curr = (v[i]-first) *a;
        if(curr<=b) f = f-curr;
        else f = f-b;

        first=v[i];
        if(f<=0){
            flag = 1;
            break;
        }
      
      }

      if(flag == 1) no;
      else yes;

        

    }
    
    return 0;
}
