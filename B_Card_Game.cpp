             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

// #define ll         long long int
#define int            int64_t
#define all(x)        x.begin(),x.end()
#define rall(x)       x.rbegin(),x.rend()
#define forn(i,a,b)   for(int i = a ; i<b ; i++)
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
#define mx(x)        *max_element(all(x))
#define mn(x)        *min_element(all(x))

bool isPrime(int n) { if (n==1) return 0; for (int i=2;i<=round(sqrt(n));++i) if (n%i==0) return 0; return 1; }


//..............................................................................................................................................................


int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
       mvi v(4);
       forn(i,0,4) cin>>v[i];

       mpi mp;
       fora(x,v) mp[x]++;

       if(mp.size()==4) cout<<2<<endl;
       else if(mp.size()==1) cout<<0<<endl;
       else {
         int maxi = mx(v);
         if(v[0]==v[1] && v[0]==maxi && v[2]==v[3]) cout<<4<<endl;
         else if(v[0]==v[1] && v[2]==maxi && v[2]==v[3]) cout<<0<<endl;
       }
       else {
         int mini = mn(v);
       }

       ;
    }


    
    return 0;
}