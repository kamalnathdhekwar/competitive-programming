             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

// #define ll         long long int
#define int            int64_t
#define all(x)        x.begin(),x.end()
#define rall(x)       x.begin(),x.end()
// #define for(i,a,b)    for(ll i = a ; i<b ; i++)
// #define forr(j,c,d)   for(ll j = c ; j>=d ; j--)
#define yes           cout<<"Yes"<<endl
#define no            cout<<"No"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl
#define mvi           vector<int>
#define mvc           vector<char>
#define mvs           vector<string>
#define mpi           map<int,int>
#define mps           map<string,string>
#define umpi          map<string,string>
#define umps          map<int,int>
#define nn            cout<<endl



int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        int k,l,m,n,d;
        cin>>k>>l>>m>>n>>d;
        
        int flag = 0;

        if(k==1 || l==1 || m==1 || n==1) flag = 1;
        
        int c = 0;
        for(int i = 1 ; i<=d ; i++){
            if(i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0) c++;
        }

        if(flag==1) cout<<d;
        else cout<<d-c;
        nn;

       

    
    return 0;
}