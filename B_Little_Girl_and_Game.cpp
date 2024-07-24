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
#define umps          unordred_map<int,int>
#define nn            cout<<"\n"
#define bs            binary_search
#define mx(x)        *max_element(all(x))
#define mn(x)        *min_element(all(x))

bool isPrime(int n) { if (n==1) return 0; for (int i=2;i<=round(sqrt(n));++i) if (n%i==0) return 0; return 1; }


//..............................................................................................................................................................

// Function to find the length of the longest palindromic subsequence
int longestPalindromicSubsequence(const string &s) {
    int n = s.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));

    // Strings of length 1 are palindromic
    for (int i = 0; i < n; ++i) {
        dp[i][i] = 1;
    }

    // Build the table for substrings of length 2 to n
    for (int len = 2; len <= n; ++len) {
        for (int i = 0; i <= n - len; ++i) {
            int j = i + len - 1;
            if (s[i] == s[j]) {
                dp[i][j] = dp[i + 1][j - 1] + 2;
            } else {
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[0][n - 1];
}

// Function to find the minimum number of deletions to make a string palindromic
int minDeletionsToPalindrome(const string &s) {
    int lps = longestPalindromicSubsequence(s);
    return s.size() - lps;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    
    int k = minDeletionsToPalindrome(s);
    if(k%2==0){
       cout<<"First";
    } else  cout<<"Second";


    
    return 0;
}