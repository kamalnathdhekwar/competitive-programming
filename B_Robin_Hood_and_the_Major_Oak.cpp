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
     
     int key = 0;

    //  forn(i,1,n+1) if(i+k-1>=n){
    //     key = i;
    //     break;
    //  }

     key = n-k+1;
     int odd=0;
     if(key%2==0 && n%2==0) odd=(n-key)/2;
     else odd=(n-key)/2+1;

     
    // else if((key%2==0 && n%2==1) || )  odd=n/2+1;
    //  else if(key%2==1 && n%2==0)  odd=  odd=n/2+1;
    //  else  
    
     
    

    
    //  
    //  forn(i,key,n+1) if(i%2==1) odd++;

     if(odd%2==0) YES;
     else NO;

     

  
    }


    
    return 0;
}