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

void solve(){
    
    
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        
    string s;
    cin>>s;
    
    ll n = s.length();
    ll ab = 0;
    ll ba = 0;
     for(i,0,n-1){
        string sa = s.substr(i,2);
        if(sa=="ab") ab++;
        else if(sa=="ba") ba++;
    }
    
    // ll flag = 0;
    // if(ab==ba) {
    //     flag =1;
    // }

    ll c = abs(ab-ba);
    
    
    for(i,0,n-1){
    
    if(ab==ba) break;
    if(ab>ba){
        if(s[i]=='a'){
        s[i]='b';
        ab--;
      }
    }
    else if(ba>ab){
       if(s[i]=='b'){
        s[i]='a';
        ba--;
      }
    }
    }

    // if(flag==1) cout<<s<<endl;
    // else cout<<"krrr"<<endl;
    
    cout<<s<<endl;

    nn;


    }


    
    return 0;
}