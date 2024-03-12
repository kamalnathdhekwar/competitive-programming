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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll cm=0;
        ll cp=0;
        ll pc = 0;

        for(i,0,n) if(s[i]=='p') pc++;
        
        ll c = 0;
        for(i,0,n-2){
            
            string k = s.substr(i,3);
            if(k=="map" || k=="pie"){
                c++;
                i+=2;
            }
        }

        // if(cm+cp<=pc) cout<<cm+cp<<endl;
        // else if(cm+cp==0) cout<<0<<endl;
        // else if(cm+cp>pc) cout<<pc<<endl;
        // else cout<<cm+cp-1<<endl;
        
        cout<<c<<endl;
        
        nn;
      
      // piemapieln

        
    }


    
    return 0;
}