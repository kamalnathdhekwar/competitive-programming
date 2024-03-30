             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
#define rall(x)       x.rbegin(),x.rend()
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
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll n = s.length();
       
        ll ans = n-2;
        
        for(i,0,n){
            for(j,i+1,n){
                ll num = 0;
                num = (s[i]-48)*10+s[j]-48;
            //   num=num*10+s[i]-48;
            //     num=num*10+s[j]-48;
                
                if((num%25)==0)
                {
                    ans=min(ans, n-i-2);
                }
            }
        }
         
         cout<<ans;
        nn;

        nn;

        

        
        
        
    }


    
    return 0;
}