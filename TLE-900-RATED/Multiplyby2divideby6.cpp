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
        ll m = n;
       ll flag = 0;
       ll count = 0;
       while(n>1){
        if(n==1) break;
        if(n%6==0){
             n=n/6;
             count++;
        }
        else if((2*n)%6==0){
            n=n*2;
            count++;
        }
        else{
            flag = 1;
            break;
        }


       }

       if(m==1) cout<<0<<endl;
       else if(flag==1) cout<<-1<<endl;
       else cout<<count<<endl;
        
    }
    
    return 0;
}