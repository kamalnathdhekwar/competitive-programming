                        // ***  ... जय श्री राम ...  ***//
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
// #define for(i,a,b)    for(ll i = a ; i<b ; i++)
#define yes           cout<<"yes"<<endl
#define no            cout<<"no"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl


int main()
{
    ll t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
   // vector<ll> v(n);
   map<ll, ll> mp;
   ll x;
   ll mx = 0;
    for(int i = 0 ; i<n ; i++){
     cin>>x;
     mp[x]++;
     mx = max(mx,mp[x]);
    }
   ll flag = 0;
    if(mp.size()>2){
        flag =1;
        
    }
    else if(mp.size() == 2) {
        for(auto it:mp){
            if(mx-it.second > 1){
               flag =1;
                //break;
            }
        }
    }
    if(flag==1) no;
    else  yes;
    // ll count=0;
    // sort(all(v));

    // for(int i = 0 ; i<n-1 ; i++){
    //  if(v[i]==v[i+1]){
    //     count++;
    //  }
    // }
    // ll s=1;

    // if(count>1){
    //     for(int i = 0 ; i<n-1 ; i++){
    //         if(v[i]==v[i+1]) s++;
    //         else break;
    //     }
    // }
    // ll f = n-s;
    // if(count+1==n) yes;
    // else if(abs(s-f)==0 || abs(s-f)==1) yes;
    // else no;
 


    // for(int i = 0 ; i<n ; i++){
    //     ll amaxi=0;
    //     for(int j=i+1 ; j<n ; j++){
    //        ll  maxi=0 ;
    //         maxi = max(maxi,v[i]+v[j]);
    //        amaxi=max(amaxi,maxi);
    //     }
    //      k.push_back(amaxi);
  

        
    // }
    // for(int i = 0 ; i<n ; i++){
    //     cout<<k[i]<<" ";
    // }
    //     cout<<endl;
    
    }
    
    return 0;
}