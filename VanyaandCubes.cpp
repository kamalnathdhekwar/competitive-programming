             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
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
   
    ll n;
    cin>>n;
    ll ans = 0;
    ll sum = 0;
    mvi v;
   
   ll i = 1;
    while(true){

        if(sum>=n) break;
         for(j,1,i+1){
            sum+=j;
        }
        v.push_back(sum);
        i++;
    }
    

for(i,0,v.size()){
    if(v[i]==n) ans=i;
    else if(v[i]>n) ans = i-1;
}
    cout<<ans+1<<endl;

    
    
    

//     for(i,0,sqrt(n)+1){
//         if(i*i==n) flag=1;
//     }

//   if(n==1) cout<<1<<endl;
//   else if(flag==1) cout<<sqrt(n)-1<<endl;
//   else cout<<floor(sqrt(n))<<endl;

    
    return 0;
}