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
        ll n,m;
        cin>>n>>m;
        
        mvi v(n);
        string s;

        for(i,0,n){
         cin>>v[i];   
        }

       
        cin>>s;

        ll pro = 1;
        ll allp = 1;

        for(i,0,n){

            allp = allp*v[i];
        }

       
     
       
       cout<<allp%m<<" ";

        ll j = n-1;
        ll i = 0;
        ll x = -1;
         
// cout<<allp<<" "<<endl;
     

        ll p = n;

        for(k,0,p-1){

            if(s[x+k+1]=='L') {
                ll curr = 0;

                curr = (allp/v[i])%m;

               cout<<curr<<" ";

               allp = allp/v[i];

               i++;
            }

         else if(s[x+k+1]=='R'){
                ll curr = 0;

                curr = (allp/v[j])%m;

               cout<<curr<<" ";

               allp = allp/v[j];

                j--;
            }
        }

        nn;
        nn;
        
    }
    
    return 0;
}