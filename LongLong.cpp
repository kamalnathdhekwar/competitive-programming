             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
#define rall(x)       x.begin(),x.end()
#define for(i,a,b)    for(ll i = a ; i<b ; i++)
#define forr(j,c,d)   for(ll j = c ; j>=d ; j--)
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

ll KadaneAlgo(vector<ll> &v ,ll n, ll l,ll r){
   ll mxF = INT_MIN;
   ll me = 0;
 
   for(i,l,r+1){
    me = me+v[i];
 
    if(mxF<me){
        mxF = me;
    }
 
    if(me<0){
        me=0;
    }
   }
 
   return mxF;
}


int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n ;
        cin>>n;

        mvi v(n);
        
        ll sum = 0;
        for(i,0,n) {
            cin>>v[i];
            sum+=abs(v[i]);
        }
        
        ll ans = 0;
    
        ll count=0;
        for(i,0,n){
            if(v[i]==0 && count==0){
                continue;
            }
            if(v[i]<=0){
                count++;
            }
            else{
                if(count>0){
                    ans++;
                }
                count=0;
            }
        }
        if(count){
            ans++;
        }

        cout<<sum<<" "<<ans<<endl;
        nn;

    }


    
    return 0;
}