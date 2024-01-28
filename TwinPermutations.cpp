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
#define NO            cout<<"NO"<<endl\

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
      mvi x;
    ll maxi = INT_MIN;
      for(i,0,n){
        cin>>v[i];
        maxi = max(maxi,v[i]);
      }
  

      maxi += 1;

      for(i,0,n){
        v[i]=n+1-v[i];
        
      }
    //   for(i,0,n){
    //     for(j,0,n){
    //         if(v[i]+x[i] > v[j] + x[j]){
    //             swap(x[i],x[j]);
    //         }
    //         else continue;
    //     }
    //   }
      
    //   for(i,0,n-1){
    //     if(v[i]>v[i+1]){
    //         swap(v[i],v[i+1]);
    //     }
    //   }
 
 //sort(v.begin(),v.end());

      for(i,0,n){
        cout<<v[i]<<" ";
      }
      nn;
    }
    
    return 0;
}
