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
        ll n;
        cin>>n;
        
        mvi v(n);
        for(ll i = 0 ; i< n ; i++){
            cin>>v[i];
        }
     
        char ch = 'a';
        mvi fq(26,0);

        string str = "";
        for(ll i = 0 ; i< n ; i++){
            ll x = v[i];
            for(char ch = 'a' ; ch<='z' ; ch++){
                ll idx = ch -'a';
                if(fq[idx]==x){
                    str += ch;
                    fq[idx]++;
                    break;
                }
            }
        }

        cout<<str<<endl;
    }
    
    return 0;
}