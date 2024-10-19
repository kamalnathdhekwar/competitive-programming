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
        int n;
        cin>>n;
        mvi v(n);
        forn(i,0,n) cin>>v[i];

        mvi a(n),b(n);
        
        //sort(all(v));

        // forn(i,0,n){
            
        //     int mini = INT_MAX;
        //     int maxi = INT_MIN;

        //     forn(j,0,i+1){
        //          mini = min(mini,v[j]);
        //          maxi = max(maxi,v[j]);
        //     }

        //     a[i]=mini;
        //     b[i]=maxi;
        // }

        int ans = 0;
        int maxi = mx(v);
        int mini = mn(v);

        forn(i,0,n){
            b[i]=maxi;
        }
        
        a[0]=maxi;
         forn(i,1,n){
            a[i]=mini;
        }

        // sort(all(a));
        // sort(all(b));
        
        // forn(i,0,n) cout<<a[i]<<" ";
        // nn;
        //         forn(i,0,n) cout<<b[i]<<" ";
        //         nn;

        forn(i,0,n) ans+=b[i]-a[i];

        cout<<ans<<endl;

    }


    
    return 0;
}