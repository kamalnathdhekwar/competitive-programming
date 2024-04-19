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
    ll n;
    cin>>n;
    mvi v(n);

    for(i,0,n) cin>>v[i];
    
    mvi ans;
    while(true){
        ll k = 1;
       for(i,0,n){
        if(v[i]==k) {
            ans.push_back(i+1);
            k++;
            continue;
        }
       }
      
       
       if(ans.size()==n) break;
       
    }

    for(i,0,n) cout<<ans[i]<<" ";

    nn;
    return 0;
}