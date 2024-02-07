             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
// #define for(i,a,b)    for(ll i = a ; i<b ; i++)
// #define forr(j,c,d)   for(ll j = c ; j>=d ; j--)
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
        ll n,m,k;
        cin>>n>>m>>k;

        mvi a(n);
        mvi b(m);

        for(ll i = 0 ; i<n ; i++){
            cin>>a[i];
        }
        for(ll i = 0 ; i<m ; i++){
            cin>>b[i];
        }
         
         ll c1=0;
         ll c2= 0;
         
         mvi aa;
         mvi bb;
        set<ll> aaa;
        set<ll> bbb;

        for(ll i = 0 ; i<n ; i++){
         if(a[i]<=k) {
            aaa.insert(a[i]);
            c1++;
         }
        }

        for(ll i = 0 ; i<m ; i++){
            if(b[i]<=k) {
                bbb.insert(b[i]);
                c2++;
            }
        }
       
          for (const ll& element : aaa) {
        std::cout << element << " ";
         }

         

    nn;

    nn;
     
        
    }
    
    return 0;
}