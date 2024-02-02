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
#define NO            cout<<"NO"<<endl\
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
      
      ll i = 0;
      ll j = n-1;
      ll ans = 0;
      while(i<=j){
       
       if(str[i]=='0' && str[j]=='1'){
        i++;
        j--;
         continue;
       }
       else if(str[i]=='1' && str[j]=='0'){
        i++;
        j--;
         continue;
       } 
      
       else {
        ans = j-i;
        break;
       }
      }
      if(n%2==0 && ans==0) cout<<0<<endl;
      else cout<<ans+1<<endl;
    }
    
    return 0;
}
