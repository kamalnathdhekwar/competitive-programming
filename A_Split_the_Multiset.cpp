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


int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        
        // if(k>=n) cout<<0<<endl;
        // else {
            
        //      int ans = 0;
        //     if(n%k!=0) ans++;
           
        //    while(true){
        //     if(k>=n) break;
        //     ans+=n/k;
        //     n/=k;

        //     if(k>=n) break;
        //    }
           
         
        //    cout<<ans+1<<endl;

        
        // brute force

        mvi v;
        v.pb(n);
        int ans = 0;
        while(v.size()<n){
            int curr = v.back();

            v.erase(v.begin()+v.size()-1);

            int to=min(curr-1,k-1);

            forn(i,1,to+1){
                v.pb(1);
            }
            v.pb(curr-k+1);

            ans++;
        }

        cout<<ans<<endl;

        }
       
       

    }


    
