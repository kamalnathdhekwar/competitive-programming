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
   
   ll t = 5;
   ll sn=0;
   ll sidx=0;
   ll k = 1;
   while(t--){
    
    mvi s(5);
    for(i,0,5) cin>>s[i];

    for(i,0,5){
        if(s[i]==1) {
            sidx=i+1;
            sn = k;
        
        }
    }

    k++;


   }

   cout<<abs(3-sidx)+abs(3-sn)<<endl;
    
    return 0;
}