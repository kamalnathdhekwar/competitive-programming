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
        mvi v(n);
        ll one = 0;
        ll two = 0;
        for(i,0,n){
            cin>>v[i];
            if(v[i]==1) one++;
            if(v[i]==2) two++;
        }
        ll halfCount = 0;
        ll ans = 0;
        ll flag =0;

       for(i,0,n){
        if(v[i]==2){
            halfCount++;
        }

        if(halfCount*2==two){
                ans = i+1;
                flag = 1;
                break;
            }
       }
       
      if(flag==0) cout<<-1<<endl;
      else cout<<ans<<endl;

        
    }
    
    return 0;
}
