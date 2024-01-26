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
        ll n ;
        cin>>n;
        mvi v(n);
        ll one =0 ;
        ll Nones = 0;
        ll product = 1;
        ll sum = 0;
        for(int i = 0; i<n ; i++){
            cin>>v[i];
            
            product *= v[i];
            sum += v[i];
        }
       ll ans = 0;

       for(int i = 0; ; i++){

        if(sum>=0 && product==1){
            ans = i;
            break;
        }
        product *= -1;
        sum +=2;
       }

       cout<<ans<<endl;
    }
    
    return 0;
}
