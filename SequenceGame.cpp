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
      ll n ;
      cin>>n;
      mvi v(n) ,a;

      for(i,0,n){
        cin>>v[i];
      }

      // first element same for both the array
      a.push_back(v[0]);
    
      for(i,1,n){
         if(v[i-1]>v[i]){
            a.push_back(v[i]);
            a.push_back(v[i]);
         }
         else {
            a.push_back(v[i]);
         }
      }

     cout<<(ll)a.size();
     nn;
      for(i,0,(ll)a.size()){
        cout<<a[i]<<" ";
      }
      nn;

    }
    
    return 0;
}