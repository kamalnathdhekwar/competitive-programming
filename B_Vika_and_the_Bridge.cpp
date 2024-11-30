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

    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<vector<int>> gaps(n+1);
        vector<int> pre(n+1, 0);
        vector<int> a(n+1, 0);
        for (int i = 1; i <= n; ++i) {
            pre[i] = 0;
            gaps[i] = vector<int>();
        }
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        for (int i = 1; i <= n; ++i) {
            gaps[a[i]].push_back(i - pre[a[i]] - 1);
            pre[a[i]] = i;
        }
        int mn = INT_MAX;
        for (int i = 1; i <= k; ++i) {
            gaps[i].push_back(n - pre[i]);
            sort(gaps[i].rbegin(), gaps[i].rend());
            int res = gaps[i][0] / 2;
            if (gaps[i].size() >= 2) {
                res = max(res, gaps[i][1]);
            }
            mn = min(mn, res);
        }
        cout << mn << endl;
    }
    return 0;
}

