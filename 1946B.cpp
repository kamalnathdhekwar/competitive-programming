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

ll solve(vector<ll> &v ,ll n){
   ll mxF = INT_MIN;
   ll me = 0;

   for(i,0,n){
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
    ll mod = 1e9+7;
    while(t--){
        ll n,k;
        cin>>n>>k;
        
        mvi v(n);

        for(i,0,n) cin>>v[i];

       ll c = 0; 
       ll sum2=0;
       ll sum = 0;
       
        for(i,0,n){
            sum+=v[i];
        }
        
        ll kk = v[0];
        ll c2 = 1;
        
        for(i,0,n){
            if(v[i]<0) c2++;
        }
        for(i,0,n-1){
            if(v[i]==v[i+1]) c2++;
        }
       

        
       

        ll curr = solve(v,n);

        //reverse(all(v));
       
       ll pr = 1;
        while(k--){
          pr = pr*2;
          
          pr %= mod;
        }

        ll result = (curr*(pr-1))%mod;

        result = ((result%mod)+(sum%mod))%mod;

        if(0>result){
            result = result+mod;
        }
    //    if(c2==n) cout<<mod+sum<<endl;
    //    else  cout<<result%mod<<endl;
    //     nn;

        
       
      
      if(c2==n && c==n) cout<<n*(mod+kk);
      else if(c==n) cout<<mod+sum<<endl;
      else cout<<result%mod<<endl;
      nn;
   
      

    }


    
    return 0;
}