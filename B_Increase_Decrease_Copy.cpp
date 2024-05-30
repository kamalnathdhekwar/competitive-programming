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
#define mvi           vector<int>
#define mvc           vector<char>
#define mvs           vector<string>
#define mpi           map<int,int>
#define mps           map<string,string>
#define umpi          map<string,string>
#define umps          map<int,int>
#define nn            cout<<"\n"

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        mvi a(n);
        mvi b(n+1);

        forn(i,0,n) cin>>a[i];
        forn(i,0,n+1) cin>>b[i];

        int ans = 1;

        forn(i,0,n){
            ans+=abs(a[i]-b[i]);
        }
        int lb = b[n];
        int flag = 0;
        int ext = INT_MAX;

        forn(i,0,n){
            if((lb<=b[i] && lb>=a[i]) || (lb>=b[i] && lb<=a[i]) ) flag = 1;
            
            ext = min({abs(lb-a[i]),abs(lb-b[i]) , ext}); 
        }
        if(flag==1) cout<<ans<<endl;
        else cout<<ans+ext<<endl;
    }


    
    return 0;
}