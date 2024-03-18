             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
#define rall(x)       x.begin(),x.end()
// #define for(i,a,b)    for(ll i = a ; i<b ; i++)
// #define forr(j,c,d)   for(ll j = c ; j>=d ; j--)
#define yes           cout<<"Yes"<<endl
#define no            cout<<"No"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl
#define mvi           vector<ll>
#define mvc           vector<char>
#define mvs           vector<string>
#define mpi           map<ll,ll>
#define mps           map<string,string>
#define umpi          map<string,string>
#define umps          map<ll,ll>
#define nn            cout<<endl

bool isSorted(vector<ll> v,ll n){
    for(ll i = 0 ; i<n-1 ; i++){
      if(v[i]>v[i+1]) return false;
    }

    return true;
}

int main()
{
    ll t;
    cin>>t;
    while(t--){
       ll n;
       cin>>n;
       mvi v(n);
       ll co = 0;
       for(ll i = 0 ; i<n ; i++) {
        cin>>v[i];
        if(v[i]==1) co++;
       }

       mvi u(n);

       for(ll i = 0 ; i<n ; i++) u[i]=v[i];

       ll c = 0;
       ll flag = 0;

       
     
     for(ll j = n-2 ; j>=0 ; j--){
       
        if(v[j+1]==0){
            flag = 1;
            break;
        }

         while(v[j]>=v[j+1]){
                v[j]/=2;
                c++;
                if(flag==1) break;
            }
     }
 

     
        if(isSorted(u,n)) cout<<0<<endl;
        else if(flag = 1) cout<<-1<<endl;
       else  cout<<c<<endl;

       nn;

     }


    
    return 0;
}