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
     long long  n;
      cin>>n;
      
      vector<long long > v(n);
      for(ll i =0 ; i<n ; i++) {
          cin>>v[i];
          
      }
      
      int f = v[0];
      
      sort(v.begin(),v.end());
      
     
      vector<long long > vp(n);
     
      
      long long ans = 0;
      
      ll x = 0;
      ll y = 0;
      
      if(f==v[0]) {
         ans =  f+(v[1]-f)/2;
      }
      
      for(ll i = 0; i<n ; i++){
          if(v[i]==f){
              x=f-(f-v[i-1])/2;
              y = (v[i+1]-f)/2+f;
              break;
          }
      }
      
      
      if(f==v[0]) cout<<ans;
      else if(f==v[n-1])  cout<<-f+1+1000000+(f-v[n-2])/2;
      else cout<<y-x+1;
    
      
     cout<<endl;
    }
}