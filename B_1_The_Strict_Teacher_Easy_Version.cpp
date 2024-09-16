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
     int n,m,q;
     cin>>n>>m>>q;

     mvi b(m);
     forn(i,0,m) cin>>b[i];
     
     sort(all(b));
     cin>>q;
     
     //if(q>)
    int x = 0;

    if(q>b[1]){
        // x=q-b[1];
         cout<<n-b[1];
         nn;
         
    }
    else if(q<b[0]) {
        x=b[0]-q;
        cout<<b[0]-1;
         nn;
    }
   else  {
    x = abs(b[0]-b[1])/2;
    cout<<x<<endl;
   }
     

     

    //  if((q>=b[0] && q<=b[1]) || (q==1 || q==n)) cout<<ceil(x)<<endl;
    //  else cout<<min(abs(b[0]-q)-1,abs(b[1]-q)-1)<<endl;
     

  
    }


    
    return 0;
}