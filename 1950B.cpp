             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
#define rall(x)       x.begin(),x.end()
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
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        char a[2*n][2*n];
        
        for(i,0,2*n){
            for(j,0,2*n){
                
                    a[i][j]='.';
                
            }
        }

        for(i,0,2*n-1){
            for(j,0,2*n-1){
                if(i==j){
                    a[i][j]='#';
                    a[i+1][j]='#';
                    a[i][j+1]='#';
                    a[i+1][j+1]='#';
                }
                else if(j%3==0){
                    a[i][j]='#';
                    a[i+1][j]='#';
                    a[i][j+1]='#';
                    a[i+1][j+1]='#';

                }
              
            }
           
        }

         for(i,0,2*n){
            for(j,0,2*n){
                
                    cout<<a[i][j];
                
            }
            nn;
        }
        nn;
        nn;

    }


    
    return 0;
}