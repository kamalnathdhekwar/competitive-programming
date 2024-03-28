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

int main()
{
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll k = (s[0]-'0')*10+s[1]-'0';
        ll m = (s[3]-'0')*10+s[4]-'0';
        
        if(k==12) cout<<s<<" PM";
        else if(k==24) cout<<"12:00 AM";
        else if(k<12 && k!=00) cout<<s<<" AM";
        else if(k>12){
            if(m<10){
                if(k-12>=10) cout<<k-12<<":0"<<m<<" PM";
                else cout<<"0"<<k-12<<":0"<<m<<" PM";
            }
             else if(m>=10){
                if(k-12>=10) cout<<k-12<<":"<<m<<" PM";
                else cout<<"0"<<k-12<<":"<<m<<" PM";
            }
        }
        else if(k==00){
           if(m>=10)  cout<<12<<":"<<m<<" AM";
           else cout<<12<<":0"<<m<<" AM";
        }

        nn;

        
    }


    
    return 0;
}