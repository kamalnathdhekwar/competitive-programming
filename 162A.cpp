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

        mvi v(n);

        for(i,0,n) cin>>v[i];
        
        ll i = 0;
        ll j = n-1;
        ll st =-1;
        ll ed=0;
        while(i<=n-1 || j>=0){
            if(st==-1) if(v[i]==1) st = i;
            if(ed==0)  if(v[j]==1) ed = j;
           
            i++;
            j--;
        }
        
        ll c=0;
        for(i,st,ed+1){
            if(v[i]==0) c++;
        }

        cout<<c<<endl;
        nn;

        
        
    }
    
    return 0;
}