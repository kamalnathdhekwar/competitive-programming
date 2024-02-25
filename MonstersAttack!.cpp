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
#define mvc           vector<char>
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

        mvi a(n);
        mvi x(n);

        for(i,0,n){
            cin>>a[i];
           
        }
        for(i,0,n){
            cin>>x[i];
           
        }


        mvi x2(n);
        
        for(i,0,n){
            if(x[i]<0) x2[i]= -x[i];
            else x2[i]=x[i];
        }

        sort(all(x2));
        ll flag = 1;
        
         
        // for(i,0,n) cout<<x2[i]<<" ";
        // nn;

         map<ll,ll> mp;

        for(i,0,n){
            mp[x[i]] = a[i];
        }

        ll sum = 0;

        for(i,1,n+1){

        sum += k;
        ll req = mp[i] + mp[-i];
        
        if(sum < req){
        flag=0;
           break;
        }
        sum -= req;
        }
       
       if(flag==0) no;
       else yes;

        
    }
    
    return 0;
}