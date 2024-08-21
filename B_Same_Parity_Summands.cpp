#include<bits/stdc++.h>
using namespace std;

#define int            int64_t
#define all(x)         x.begin(),x.end()
#define rall(x)        x.rbegin(),x.rend()
#define f(i,s,e)       for(int i=s;i<e;i++)
#define forr(j,c,d)    for(int j = c ; j>=d ; j--)
#define fora(a,b)      for(auto& a : b)
#define yes            cout<<"Yes"<<endl
#define no             cout<<"No"<<endl
#define YES            cout<<"YES"<<endl
#define NO             cout<<"NO"<<endl
#define pb             push_back
#define mvi            vector<int>
#define mvc            vector<char>
#define mvs            vector<string>
#define mpi            map<int,int>
#define mpc            map<char,int>
#define umpi           unordered_map<int,int>
#define umpc           unordered_map<char,int>
#define nn             cout<<"\n"
#define bs             binary_search
#define mx(x)          *max_element(all(x))
#define mn(x)          *min_element(all(x))

bool isPrime(int n) { 
    if (n == 1) return 0; 
    for (int i = 2; i <= round(sqrt(n)); ++i) 
        if (n % i == 0) return 0; 
    return 1; 
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        if(k > n) {
            cout << "NO" << endl;
        }
        else if(k == 1) {
            cout << "YES" << endl;
            cout << n << endl;
        }
        else if(k == n) {
            cout << "YES" << endl;
            f(i, 0, n) {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else {
            if(n % 2 == 0) {
                if(n >= 2 * k) {  // Corrected the condition to handle even n properly
                    cout << "YES" << endl;
                    f(i, 0, k - 1) {
                        cout << 2 << " ";
                    }
                    cout << n - 2 * (k - 1) << endl;
                } 
                else if(k % 2 == 0) {
                    cout << "YES" << endl;
                    f(i, 0, k - 1) {
                        cout << 1 << " ";
                    }
                    cout << n - (k - 1) << endl;
                } 
                else {
                    cout << "NO" << endl;
                }
            } 
            else {
                if(k % 2 == 0) {
                    cout << "NO" << endl;
                } 
                else {
                    cout << "YES" << endl;
                    f(i, 0, k - 1) {
                        cout << 1 << " ";
                    }
                    cout << n - (k - 1) << endl;
                }
            }
        }
    }

    return 0;
}
