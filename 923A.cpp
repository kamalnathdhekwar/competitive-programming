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
        ll n;
        cin>>n;
        string str;
        cin>>str;

        ll i = 0;
        ll j = n-1;
        ll one = 0;
        ll two = 0;
        for(int i= 0; i<n ; i++){
            if(str[i]=='B'){
                one = i;
                break;
            }
        }
         for(int i = n-1 ; i>=0 ; i--){
            if(str[i]=='B'){
                two = i;
                break;
            }
        }

        cout<<two-one+1<<endl;
        
    }
    
    return 0;
}