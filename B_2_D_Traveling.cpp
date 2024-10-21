             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

#define ll          int
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

    int t;
    cin>>t;
    while(t--){
        int n,k,a,b,price,pricea_major = LLONG_MAX/2,priceb_major = LLONG_MAX/2;
        cin>>n>>k>>a>>b;
        vector < ll > x(n+1),y(n+1);
        for(ll i = 1 ; i <= n ; i++) {
            cin>>x[i]>>y[i];
        }
        price = abs(x[a]-x[b]) + abs(y[a]-y[b]);
        for (ll maj = 1; maj <= k; maj++) {
            pricea_major = min(pricea_major, abs(x[a] - x[maj]) + abs(y[a] - y[maj]));
            priceb_major = min(priceb_major, abs(x[b] - x[maj]) + abs(y[b] - y[maj]));
        }
        cout<<min(price,pricea_major+priceb_major)<<endl;
    }  
    return 0;
}

