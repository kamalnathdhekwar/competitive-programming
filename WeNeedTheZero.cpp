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
        bool isZero = false ;
        ll maxi = INT_MIN;
        for(i,0,n){
            cin>>v[i];

            if(v[i]==0) isZero =true;
            maxi =max(maxi,v[i]);
        }

        ll x = 0;

       

        for(i,0,n){
            x = x^v[i];
        }

        if(n%2==0){
            if(x==0) cout<<5<<endl;
            else cout<<-1<<endl;
        }
        else cout<<x<<endl;
       
    }
    
    return 0;
}
