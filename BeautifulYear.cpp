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

bool check(ll n){
    string s = to_string(n);
    sort(all(s));

    for(i,0,s.length()-1){
        if(s[i]==s[i+1]) return false;
    }

    return true;
}
int main()
{
   ll n;
   cin>>n;
   
   mvi v;

   for(i,1000,9013){
     if(check(i)) v.push_back(i);
   }

   for(i,0,v.size()){
    if(v[i]>n){
        cout<<v[i];
        break;
    }
   }

   nn;
    return 0;
}