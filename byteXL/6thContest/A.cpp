          
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
// #define mpi           map<ll,ll>
// #define mps           map<string,string>
// #define umpi          map<string,string>
// #define umps          map<ll,ll>
#define nn            cout<<endl




int main() {
//    ll t;
//    cin>>t;
//    while(t--){
    
    ll n;
    cin>>n;

    string s;
    cin>>s;

    map<char,int> mp1;
    map<char,int> mp2;
    for(auto x:s){
        if(x>='a' && x<='z') mp1[x]++;
        else mp2[x]++;
    }
   
   ll cs=0;
   ll cc=0;
    for(auto x:mp1){
       cs++;
    }
    for(auto x:mp2){
       cc++;
    }

    if(cs==26 || cc==26) YES;
    else NO;


}