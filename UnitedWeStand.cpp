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
        mvi a(n) ,b,c;
        ll maxi = INT_MIN;
        for(i,0,n){
            cin>>a[i];
            maxi = max(maxi,a[i]);
        }

         for(i,0,n){
            if(a[i]==maxi){
                c.push_back(a[i]);
            }
            else b.push_back(a[i]);
         }
        // output 


if(b.size()==0 || c.size()==0){
    cout<<-1<<endl;
}

 else {
     cout<<b.size()<<" "<<c.size()<<endl;

        for(i,0,b.size()){
            cout<<b[i]<<" ";
        }
      nn;
        for(i,0,c.size()){
            cout<<c[i]<<" ";
        }

     nn;
 }      
 
    }
    
    return 0;
}