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
       
       ll n;
       cin>>n;
       mvi v(n);
       ll cc =0;
       for(i,0,n){
         cin>>v[i];
         if(v[i]==0) cc++;
       }
       
     ll count = 1;
    //     for(i,0,n-1){
    //      ll curr = 0;
    //      if(v[i]==0 && v[i+1]==0){
    //        curr++;
    //      }
    //      else curr = 0;
    //      count = max(count,curr);
            
    //     }
        
        for(i,0,n){
            ll curr = 0;
            if(v[i]==0){
                for(j,i,n){
                    if(v[j]==0){
                        curr++;
                    }
                    else break;
                }
                count = max(curr,count);
            }
            else curr = 0;
        }
        if(cc==0) cout<<0<<endl;
        else cout<<count<<endl;
       
    }
    
    return 0;
}
