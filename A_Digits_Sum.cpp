#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define all(x) x.begin(), x.end()
#define rall(x) x.begin(), x.end()
#define forn(i, a, b) for (int i = a; i < b; i++)
#define forr(j, c, d) for (int j = c; j >= d; j--)
#define fora(a, b) for (auto& a : b)
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define mvi vector<int>
#define mvc vector<char>
#define mvs vector<string>
#define mpi map<int, int>
#define mps map<string, string>
#define umpi map<string, string>
#define umps map<int, int>
#define nn cout << "\n"

int sum(int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int c = 0;
        // forn(i, 1, n) {
        //     if (sum(i + 1) < sum(i)) {
        //         c++;
        //     }
        // }
        
        mvi ss;
        forn(i,1,n+1){
            ss.push_back(sum(i));
        }

        forn(i,0,ss.size()-1) if(ss[i+1]<ss[i]) c++;

        if(n==1) cout<<c<<endl;
        else if(n==9) cout<<1<<endl;
        else cout << c << endl;
    }

    return 0;
}
