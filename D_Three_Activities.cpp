             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

#define ll         long long int
// #define int            int64_t
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

int main(){
ll t;
    cin>>t;
    while(t--){
        ll n,res = 0;
        cin>>n;
        vector < ll > a(n),b(n),c(n);
        vector < pair < ll, ll > > va,vb,vc;
        pair < ll, ll > bkp,bkp2;
        for(ll i = 0 ; i < n ; i++) {
            cin>>a[i];
            va.pb(make_pair(a[i],i));
        }
        for(ll i = 0 ; i < n ; i++) {
            cin>>b[i];
            vb.pb(make_pair(b[i],i));
        }
        for(ll i = 0 ; i < n ; i++) {
            cin>>c[i];
            vc.pb(make_pair(c[i],i));
        }
        sort(va.begin(),va.end(),greater <> ());
        sort(vb.begin(),vb.end(),greater <> ());
        sort(vc.begin(),vc.end(),greater <> ());
 
        for(ll i = 0 ; i < 3 ; i++) {
            for(ll j = 0 ; j < 3 ; j++) {
                for(ll k = 0 ; k < 3 ; k++) {
                    if(va[i].second!=vb[j].second and va[i].second!=vc[k].second and vb[j].second!=vc[k].second) {
                        res = max(va[i].first+vb[j].first+vc[k].first,res);
                    }
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;     
 }