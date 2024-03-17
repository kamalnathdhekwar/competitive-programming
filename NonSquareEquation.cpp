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

ll dd(ll n){
    ll sum = 0;
    
    while(n>0){
        ll rem = n%10;
        sum+=rem;
        n/=10;
    }
    return sum;
}

int main()
{
   ll n;
   cin>>n;
  ll flag = 0;
  ll ans = 0;
 
     for (s,0,91) {
        ll d = s * s + 4 * n;
        ll sq = (ll)std::sqrt(d);
        
        if (sq * sq == d) {
            ll x = (-s + sq) / 2;
            
            if (x >= 0 && dd(x) == s) {
              ans = x;
                flag = 1;
               
            }
            
            x = (-s - sq) / 2;
            
            if (x >= 0 && dd(x) == s) {
                ans = x;
                flag = 1;
               
             
            }
        }
    }
   
   if(flag==0) cout<<-1<<endl;
   else cout<<ans<<endl;

   nn;


    
    return 0;
}