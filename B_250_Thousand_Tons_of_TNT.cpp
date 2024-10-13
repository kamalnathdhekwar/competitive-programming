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
    
      vector<int> v(n);

      forn(i,0,n) cin>>v[i];
     
     if(n==1) cout<<0<<endl;
     else if(n==2) cout<<abs(v[0]-v[1])<<endl;
     else {
        vector<int> p(n,0);

        p[0]=v[0];
        forn(i,1,n) p[i]=p[i-1]+v[i];
        
        vector<int> fact;
        int maxi = 0;

        forn(i,1,n) if(n%i==0) fact.pb(i);

        forn(i,0,fact.size()) {

            vector<int> vsum;
             int sum = 0;
            for(int j = fact[i]; j<=n ; j+=fact[i]){
                
                //// used prfix sum ///
                
                 if(j-fact[i]>0)
                 sum=p[j-1]-p[j-fact[i]-1];
                else sum= p[j-1];
                
                // for(int k = j ; k<j+fact[i] ; k++){
                //     sum+=v[k];
                // }

                vsum.pb(sum); 
            }

            
            maxi = max(maxi,mx(vsum)-mn(vsum));
        }
       

      cout<<maxi<<endl;
        

     }

      
      



    }


    
    return 0;
}