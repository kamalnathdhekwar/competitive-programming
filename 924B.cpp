             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
// #define for(i,a,b)    for(ll i = a ; i<b ; i++)
// #define forr(j,c,d)   for(ll j = c ; j>=d ; j--)
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
        ll n;
        cin>>n;

        mvi v(n);

        for(ll i = 0 ; i<n ; i++){
            cin>>v[i];
        }

        sort(all(v));
        
        ll flag = 0;
        ll c = 1;
        for(ll i = 0 ; i<n-1 ; i++){
          if(v[i+1]-v[i]==1) c++;
        }
          
         v.erase(unique(v.begin(),v.end()), v.end());
           ll count = 0;
           
           for(ll i = 0 ; i<v.size(); i++){
            ll in = upper_bound(all(v),v[i]+n-1)-v.begin();

            count = max(count,in-i);
           }
           if(c==n) cout<<c<<endl;
           else cout<<count<<endl;
           nn;
           nn;

          
    }
    
    return 0;
}