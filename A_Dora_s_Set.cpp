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


//..............................................................................................................................................................


int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
      int l,r;
      cin>>l>>r;
      mvi v;

      forn(i,l,r+1) v.pb(i);

      int n = v.size();
      
      int c = 0;
      
    //   int i = 0;
    //   int j = 1;
    //   int k = 2;
    //   while(true){
    //     if(k>=n-1) break;
    //     if(__gcd(v[i],v[j])==1 && __gcd(v[j],v[k])==1 && __gcd(v[k],v[i])==1){
    //         c++;
    //         if(i<n-3) i+=3;
    //         if(j<n-3) j+=3;
    //         if(k<n-3) k+=3;
    //     }
    //     else {
    //         i++;
    //         j++;
    //         k++;
    //     }
    //   }
  

      forn(i,0,n){
        if(v[i]%2==1) c++;
      }

    

      cout<<c/2<<endl;

  
    }


    
    return 0;
}