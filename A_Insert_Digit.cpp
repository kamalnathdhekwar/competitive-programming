             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

// #define ll         long long int
#define int            int64_t
#define all(x)        x.begin(),x.end()
#define rall(x)       x.begin(),x.end()
#define forn(i,a,b)    for(int i = a ; i<b ; i++)
#define forr(j,c,d)   for(int j = c ; j>=d ; j--)
#define fora(a,b)     for(auto& a : b)
#define yes           cout<<"Yes"<<endl
#define no            cout<<"No"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl
#define pb            push_back
#define mvi           vector<int>
#define mvc           vector<char>
#define mvs           vector<string>
#define mpi           map<int,int>
#define mpc           map<char,int>
#define umps          unordred_map<int,int>
#define nn            cout<<"\n"
#define bs            binary_search

bool isPrime(int n) { if (n==1) return 0; for (int i=2;i<=round(sqrt(n));++i) if (n%i==0) return 0; return 1; }


//..............................................................................................................................................................


int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,b;
        cin>>n>>b;
        mvc v(n);
        forn(i,0,n) cin>>v[i];

        
        //forn(i,0,v.size()) cout<<v[i];
        
        char bb = b;
        int flag = 0;
        if(b==0){
            forn(i,0,n) cout<<v[i];
            cout<<0;
        }
        else {
            forn(i,0,n){
         if(v[i]-'0'<b && flag==0) {
            cout<<b;
            cout<<v[i];
            flag=1;
         }
         else cout<<v[i];
        }
        if(flag==0) cout<<b;
        }
        
     
      nn;
    }


    
    return 0;
}