             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
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

int main()
{
    ll t;
    cin>>t;
    while(t--){
      ll n;
      cin>>n;
      string a;
      cin>>a;
      string b="";
        ll val;
        for(int i=n-1; i>=0;i--)
        {
            if(a[i]=='0'){
                val=(a[i-2]-48)*10+a[i-1]-48;
                i-=2;
            }else{
                val=a[i]-48;
            }
            b+=char(val+97-1);
        }
        reverse(all(b));
        cout<<b<<"\n";

        
    }
    
    return 0;
}