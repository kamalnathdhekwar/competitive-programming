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
        mvi v(n);
        ll sum = 0;
        for(ll i = 0 ; i<n ; i++){
            cin>>v[i];
            sum += v[i];
        }
     

     ll flag = 0;
    //     ll sum1 = 0;
    //    ll sum2 = 0;
    //    mvi a;
    //    mvi b;

    //    if(n>2){

    //    for(int i = 0 ; i<n/2 ; i++){
    //     sum1 += v[i];
    //    }

    //    for(int i = n/2+1; i<n ; i++){
    //       sum2 += v[i];
    //    }

    //    }
    
    ll k = sum/n;
    ll sum2 = 0;
    for(int i = 0 ; i<n ; i++){
        if(v[0]<k) break;
        else if(v[i]>=k){
            sum2 = sum2+(v[i]-k);

        }
        else if(v[i]<k){
            if(k-v[i]<=sum2) sum2 = sum2-(k-v[i]);
            else {
                flag = 1;
                break;
            }
        }

    }


 //cout<<" sum1 "<<sum1<<"  sum2  "<<sum2<<endl;
        if(n==1) YES;
        else  if(v[0]<k) NO;
        else if(flag==0) yes;
        else NO;

        
    }
    
    return 0;
}