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
        ll x;
        cin>>x;
        
        char str[3];
        ll k = 3;
        // while(k--){
        //  char ch = 122-n;
        //  n = 122-n;
        //  str += ch;

        // }
       ll y = 0;
        if(x<=27){
            str[2]=('a'+x-3);
            str[0] = 'a';
            str[1] = 'a';
            x = x-3;

        }
        else  if(x<=53 && x>27){
         x = x-28;
         str[0]='a';
         str[2]='z'; 
         str[1]=('a'+x);
        }
        else {
            y = x-1;
            x = x-53;
            str[1]='z';
            str[2]='z';
            str[0] =('a'+x);

        }
        
        
        for(i,0,3){
            cout<<str[i];
        }
        nn;
    }
    
    return 0;
}