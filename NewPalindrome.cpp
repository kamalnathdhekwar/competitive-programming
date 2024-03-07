             
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
// #define all(x)        x.begin(),x.end()
// #define for(i,a,b)    for(ll i = a ; i<b ; i++)
// #define forr(j,c,d)   for(ll j = c ; j>=d ; j--)
#define yes           cout<<"Yes"<<endl
#define no            cout<<"No"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endlh
#define mvi           vector<ll>
#define mvc           vector<char>
#define mvs           vector<string>
// #define mpi           map<ll,ll>
// #define mps           map<string,string>
// #define umpi          map<string,string>
// #define umps          map<ll,ll>
#define nn            cout<<endl

int solve(){
    string s;
    cin>>s;
    
    map<char,int> mp;

    for(auto x:s){
     mp[x]++;
    }
    ll c = mp.size();
    ll flag= 0;
if(c<3){
    
    for(auto x :mp){
      if(x.second<2) flag = 1;
    }
}

    if(c>=2 && flag==0) yes;
    else no;


    return 0;
}
int main()
{
    int testCase=1;
    cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;
}