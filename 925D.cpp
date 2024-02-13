             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
#define for(i,a,b)    for(ll i = a ; i<b ; i++)
#define forr(j,c,d)   for(ll j = c ; j>=d ; j--)
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
        ll n,x,y;
        cin>>n>>x>>y;

        mvi v(n);
        for(i,0,n){
            cin>>v[i];
        }


      unordered_map<ll,ll> mx,my;

      for(i,0,n){
        mx[v[i]%x]++;
        my[v[i]%y]++;
      }
     ll count = 0;
      for(i,0,n){
        ll rx = v[i]%x;
        ll ry = v[i]%y;

       if (rx == 0 && ry == 0) {
            // Special case when both remainders are zero
            count++;
        } else {
            count += mx[rx] + my[ry];
        }
      }

   
     
        // for(i,0,n-1){

        //     for(j,i+1,n){
        //          ll diff = abs(v[i]-v[j]);
        //         if((v[i]+v[j])%x==0 && diff%y==0) {
        //             count++;
                   
        //         }
        //         else continue;
        //     }
        // }

        cout<<count<<endl;
    }
    
    return 0;
}