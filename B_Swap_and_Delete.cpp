             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

// #define ll         long long int
#define ll            int64_t
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

   ll t;
    cin>>t;
    while(t--){
        ll ans = 0;
        string s;
        cin>>s;
        ll n = (ll)s.size(); 
        ll a[2] = {0,0};
        for( ll i = 0 ; i < n ; i++) {
            a[s[i]-'0']++;
        }
        for(ll i = 0 ; i < n ; i++) {
            if(a[!(s[i]-'0')] > 0) {
                a[!(s[i]-'0')]--;
            }
            else {
                ans = n-i;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;     
 }