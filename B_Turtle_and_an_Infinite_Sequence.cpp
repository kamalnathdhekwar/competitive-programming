             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

// #define ll         long long int
// #define int            int64_t
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

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        
        int k = 1000;

        mvi v(n+1);
       
        forn(i,0,n+1) v[i]=i+1;

        mvi p(k);
        p[0]=v[0];

        forn(i,1,k) p[i]=p[i-1]+v[i];
        
       cout<<pow(2,m)+pow(2,n)-2<<endl;
        
        // if(n==0 && m==0) cout<<0<<endl;
        // else {
        // int ans = (p[n]+p[m]);
        // cout<<ans<<endl;
        // }



    }


    
    return 0;
}