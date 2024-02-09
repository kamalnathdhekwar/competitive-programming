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
        ll n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        
        map <char,int> mp;
        
        for(auto x : str){
            mp[x]++;
        }

        ll osum=0;
        ll codd = 0;
        for(auto x :mp){
            if(x.second%2==1) {
                osum+=x.second;
                codd++;
            }
        }

        if(k>=n) NO;
        else if(k>=codd-1) YES;
        else NO;

        nn;
        
    }
    
    return 0;
}