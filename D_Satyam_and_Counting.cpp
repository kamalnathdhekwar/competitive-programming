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


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> nums(n);
        map<int, int> b;
        set<pair<int, int>> check;
        
        // Read input and populate data structures
        for (int i = 0; i < n; ++i) {
            int x, y;
            cin >> x >> y;
            nums[i] = {x, y};
            b[x]++;
            check.insert({x, y});
        }

        int ans = 0;
        // Check condition for b[i] == 2
        for (auto &i : b) {
            if (i.second == 2) ans += n - 2;
        }

        // Check pairs in the set
        for (auto &p : check) {
            if (check.count({p.first - 1, p.second ^ 1}) && 
                check.count({p.first + 1, p.second ^ 1})) {
                ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}