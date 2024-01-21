                        // ***  ... जय श्री राम ...  *** //
#include<bits/stdc++.h>
using namespace std;

#define ll            long long
#define all(x)        x.begin(),x.end()
#define for(i,a,b)    for(ll i = a ; i<b ; i++)
#define yes           cout<<"yes"<<endl
#define no            cout<<"no"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl
#define mv(x)         vector<ll> x(n)

int main()
{
 ll t;
 cin>>t;
while(t--){

ll n,k;
cin>>n>>k;

 mv(v);

 for(i,0,n){
    cin>>v[i];
 }

ll scount=1;
ll rcount=1;

for(i,0,n-1){
    if(v[i]<=v[i+1]) scount++;
    else rcount++;
}
if(k>=2) YES;
else if(scount==n) YES;
else NO;

} 
       
 
return 0;
}