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
#define umpi          unordered_map<int,int>
#define umpc          unordered_map<char,int>
#define nn            cout<<"\n"
#define bs            binary_search
#define mx(x)        *max_element(all(x))
#define mn(x)        *min_element(all(x))

bool isPrime(int n) { if (n==1) return 0; for (int i=2;i<=round(sqrt(n));++i) if (n%i==0) return 0; return 1; }
int sumv(vector<int>v) { int sum = 0 ;for (int i=0;i<v.size();++i) sum+=v[i]; return sum; }


//..............................................................................................................................................................


int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    mvi a(n),b(m);

    forn(i,0,n) cin>>a[i];
    forn(i,0,m) cin>>b[i];

    mpi m1;

    fora(x,a) m1[x]++;
    
    // b.clear();

    // fora(x,m1) b.pb(x.first);
    
     int c = 0;
    int j = 0;
    forn(i,0,n){
       while(j<m){
        if(b[j]>=a[i]){
            c++;
            i++;
        }
        j++;
       }
    }

    // fora(x,a){
    //     fora(y,b) if(x>=y) {
    //         c++;
    //        // break;
    //     }
    //    //if(m1.find(x)!=m1.end()) m1.erase(x);
    // }

    // forn(i,0,b.size()) cout<<b[i]<<" ";
    // nn;
    
     cout<<n-c<<endl;
    //cout<<a.size()-c<<endl;



    
    return 0;
}