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

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Defining the grid
    vector<vector<char>> v(4, vector<char>(4));

    // Input the 4x4 grid
    forn(i, 0, 4) {
        forn(j, 0, 4) {
            cin >> v[i][j];
        }
    }

    // Iterate through all 2x2 subgrids in the 4x4 grid
    forn(i, 0, 3) {
        forn(j, 0, 3) {
            // Count the number of '#' and '.' in the current 2x2 subgrid
            int hashCount = 0, dotCount = 0;
            if (v[i][j] == '#') hashCount++; else dotCount++;
            if (v[i][j + 1] == '#') hashCount++; else dotCount++;
            if (v[i + 1][j] == '#') hashCount++; else dotCount++;
            if (v[i + 1][j + 1] == '#') hashCount++; else dotCount++;

            // If at least 3 of the characters in the subgrid are the same
            if (hashCount >= 3 || dotCount >= 3) {
                YES;
                return 0;
            }
        }
    }

    // If no such subgrid was found
    NO;

    return 0;
}