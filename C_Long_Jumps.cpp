// ***  ... जय श्री राम ...  ***//

#include <bits/stdc++.h>
using namespace std;

// #define ll         long long int
#define int int64_t
#define all(x) x.begin(), x.end()
#define rall(x) x.begin(), x.end()
#define forn(i, a, b) for (int i = a; i < b; i++)
#define forr(j, c, d) for (int j = c; j >= d; j--)
#define fora(a, b) for (auto &a : b)
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define pb push_back
#define mvi vector<int>
#define mvc vector<char>
#define mvs vector<string>
#define mpi map<int, int>
#define mpc map<char, int>
#define umps unordered_map<int, int>
#define nn cout << "\n"
#define bs binary_search

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        mvi v(n);
        forn(i, 0, n) cin >> v[i];

        mvi dp(n, 0);
        int maxi = INT_MIN;

        forr(i, n - 1, 0)
        {
            dp[i] = v[i];
            if (i + v[i] < n)
            {
                dp[i] += dp[i + v[i]];
            }
            maxi = max(maxi, dp[i]);
        }

        cout << maxi << endl;
    }

    return 0;
}
