             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
#define rall(x)       x.begin(),x.end()
// #define for(i,a,b)    for(ll i = a ; i<b ; i++)
// #define forr(j,c,d)   for(ll j = c ; j>=d ; j--)
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
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        char a[2*n][2*n];
        
        for(ll i = 0 ; i<2*n  ; i++){
            for(ll j = 0 ; j<2*n ; j++){
                
                  a[i][j]='.';
                
            }
        }
        
        bool flag = true;

        for(ll i = 0 ; i<2*n  ; i++){
            for(ll j = 0 ; j<2*n ; j=j+2){
              
                if(flag==false){
                      if((i+j)%4==1) cout<<"##";
                    else cout<<"..";
                }
                else {
                     
                     if((i+j)%4==0) cout<<"##";
                    else cout<<"..";
                    
                  
                }
              
            
            }
            flag = !flag;;
            nn;
         
           
        }

         
       
       

    }


    
    return 0;
}