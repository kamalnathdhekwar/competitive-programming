             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

// #define ll         long long int
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


vector<vector<char>> a;
vector<char> layer;
 
void solve() {
    int n, m;
    cin >> n >> m;
    a.assign(n, vector<char>(m));
    
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];
    
    int count = 0;
    for (int i = 0; (i + 1) * 2 <= n && (i + 1) * 2 <= m; ++i) {
        int pos = 0;
        layer.clear();
        
        for (int j = i; j < m - i; ++j) layer.push_back(a[i][j]);
        for (int j = i + 1; j < n - i - 1; ++j) layer.push_back(a[j][m - i - 1]);
        for (int j = m - i - 1; j >= i; --j) layer.push_back(a[n - i - 1][j]);
        for (int j = n - i - 2; j >= i + 1; --j) layer.push_back(a[j][i]);
 
        int layer_size = layer.size();
        for (int j = 0; j < layer_size; ++j) {
            if (layer[j] == '1' && layer[(j + 1) % layer_size] == '5' &&
                layer[(j + 2) % layer_size] == '4' && layer[(j + 3) % layer_size] == '3') {
                count++;
            }
        }
    }
    
    cout << count << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
