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

bool checkAll(vector<ll> v ,ll n){

    for(ll i = 0 ; i<n-1 ; i++){
        if(v[i]!=v[i+1]) return false;
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

        for(ll i = 0 ; i<n ; i++) cin>>v[i];

        mpi mp;
          ll flag = 0;
        for(auto x:v){
            mp[x]++;
        }

        if(mp.size()==1) {
          flag = 1;
        }
        
        ll maxi = INT_MIN;
        ll key = 0;

        for(auto x :mp){
            if(x.second>maxi){
                maxi = x.second;
                key = x.first;
            }
        }

       ll c= 0;
     
        while(true){

            if(checkAll(v,n)) break;

            mvi a(n);
            c++;
            for(ll i = 0 ; i<n ; i++){
                a[i]=v[i];
            }

            for(ll i = 0 ; i<n ; i++){
                for(ll j = 0 ; j<n ; j++){
                    if(v[i] != key && a[j]==key) {
                        swap(v[i],a[j]);
                        c++;
                    }
                }
            }

            if(checkAll(v,n)) break;


        }
       
       if(flag==1) cout<<0<<endl;
       else  cout<<c<<endl;
        nn;





    }


    
  
}