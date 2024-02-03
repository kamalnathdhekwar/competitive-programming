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

// Function to find GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

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
         
         ll flag =1;
        for(i,0,n){
          for(j,i+1,n){

            ll key = gcd(v[i],v[j]);

          if(key<=2){
            flag = 0;
            break;
          }

          }
        }

        if(flag==1) no;
        else yes;
    }
    
    return 0;
}