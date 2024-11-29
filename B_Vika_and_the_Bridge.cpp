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
       int n,k;
       cin>>n>>k;

       mvi v(n);

       forn(i,0,n) cin>>v[i];

       set<int> st;

       fora(x,v) st.insert(x);

       int ans = 0;

       fora(x,st){

         int prev = 0;
         int next = 0;
         
         vector<int> t;
         forn(i,0,n){
            if(v[i]==x){
                prev=i;
                break;
            }
         }
        
         forn(i,0,n) {
            if(v[i]==x && i!=prev) {
                next = i;
                break;
            }
         }

         t.pb(prev-0);

         while(next<n){
            
            if(v[prev]==x && v[next]==x){
                t.pb(next-prev);
            }
            if(v[next]!=x){
                next++;
            }
            if(v[prev]!=x) {
                prev++;
               // continue;
            }
         }

         t.pb(n-next);

         sort(all(t));
         int m = t.size();
         ans = min(ans,max(t[m-2],t[m-1]/2));

       }

       cout<<ans<<endl;



    }


    
    return 0;
}