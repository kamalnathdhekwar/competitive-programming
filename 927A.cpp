             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
#define for(i,a,b)    for(ll i = a ; i<b ; i++)
#define forr(j,c,d)   for(ll j = c ; j>=d ; j--)
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

        string str;
        cin>>str;
        ll c = 0;
        ll ans = 0;
        ll ct = 0;

        for(i,0,n){
            if(str[i]=='@') ct++;
        }
   ll flag = 1;
        for(i,0,n-1){
           
            if(str[i]=='@') c++;

            else if(str[i]=='.') continue;

            else if(str[i]=='*' && str[i+1]=='*') {
                flag = 0;
                break;
            }
            else continue;
        }
        
        if(flag==0)  cout<<c<<endl;
        else  cout<<ct<<endl;
      
    
    }
    
    return 0;
}