             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

// #define ll         long long int
#define int            int64_t
#define all(x)        x.begin(),x.end()
#define rall(x)       x.begin(),x.end()
#define for(i,a,b)    for(int i = a ; i<b ; i++)
// #define forr(j,c,d)   for(int j = c ; j>=d ; j--)
// #define fora(a,b)     for(auto& a : b)
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
        int n,q;
        cin>>n>>q;
        mvi v(n);

        for(i,0,n) cin>>v[i];
        
        mvi p;
        p.push_back(v[0]);
        for(i,1,n){
            p.push_back(p[i-1]+v[i]);
        }

        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            int toadd = (r-l+1)*k;
            
            int rsum = p[r-1]-p[l-1]+v[l-1];
            int finalsum = p[n-1]-rsum+toadd;
            if(finalsum%2==1) YES;
            else NO;

        }
    }


    
    return 0;
}