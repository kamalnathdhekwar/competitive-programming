             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
// #define for(i,a,b)    for(ll i = a ; i<b ; i++)
// #define forr(j,c,d)   for(ll j = c ; j>=d ; j--)
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
        ll n,m,k;
        cin>>n>>m>>k;

        mvi a(n);
        mvi b(m);

        for(ll i = 0 ; i<n ; i++){
            cin>>a[i];
        }
        for(ll i = 0 ; i<m ; i++){
            cin>>b[i];
        }
         
         map<int,int> m1;
         map<int,int> m2;

         for(ll i = 0 ; i<n; i++){
            m1[a[i]]++;
         }

         for(ll i = 0 ; i<m; i++){
            m2[b[i]]++;
         }

         ll c1=0;
         ll c2= 0;
         ll flag = 0;
         for(ll i = 1 ;i<=k ;i++){
            
            if(m1[i]>0 && m2[i]>0){
                c1++;
                c2++;
            }
            else if(m1[i]>0) c1++;
            else if(m2[i]>0) c2++;
            else flag = 1;
         }
        
        if(flag == 1) NO;
        else if(c1>=(k/2) && c2>=(k/2)) YES;
        else NO;
         
         
        }
    nn;

    nn;
     
     return 0;
        
    }
    
    
    
