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

        for(i,0,n){
            cin>>v[i];
        }

        ll count = 1;

        for(i,0,n-1){
            if(v[i]==v[i+1]) count++;
        } 
        
        ll flag = 0;
        
        ll sum = v[0];
        for(i,1,n){
            if(v[i]==sum) {
                flag = 1;
                break;
            }
            sum +=v[i];
        }

        if(count==n){
            no;
        }
        else {  
             yes;
          if(flag == 0)
          { 
           
           for(i,0,n){
            cout<<v[i]<<" ";
           }
          }
           else {
            cout<<v[n-1]<<" ";
         for(i,0,n-1){
            cout<<v[i]<<" ";
         }
         
        }
         nn;
        } 
     nn;
    }

         return 0;
    }
    
   


