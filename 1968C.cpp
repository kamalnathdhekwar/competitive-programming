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

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll m = n-1;
        mvi v(m);

        for(i,0,m) cin>>v[i];

        mvi ans(n);

        ans[0]=v[0]+1;
        
        ll maxi = *max_element(all(v));
       
        ll j = 1;



        for(i,0,m){

            ll k = v[i]+ans[j-1];
            if(k>2*v[i])
            ans[j] = ;
            j++;
        }

        

        for(i,0,ans.size()){
            cout<<ans[i]<<" ";
        }
       

        nn;
        nn;


    }


    
    return 0;
}