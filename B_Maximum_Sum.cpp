             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

#define int         long long 
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
    
    int mod = 1e10+7;
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        mvi v(n);
        forn(i,0,n) cin>>v[i];
        
        sort(all(v));
        mvi p(n);
        
        p[0]=v[0];
        
      
        forn(i,1,n) p[i]=(p[i-1]+v[i]);
        
        int total = p[n-1];
        
        int i = 2*k-1;
        int j = n-1;

       int  maxi = INT_MIN;

       int lsum = p[i];
       i-=2;
       int rsum=0;
         maxi = max(maxi,total-lsum-rsum);

        while(i>=0){
            lsum = p[i];
            rsum+=v[j];
            maxi = max(maxi,total-lsum-rsum);
            j--;
            i-=2;
        }
      
          maxi = max(maxi,total-lsum-rsum);

          reverse(all(v));
          rsum =0;
          forn(i,0,k) rsum+=v[i];
           maxi = max(maxi,total-rsum);

         cout<<maxi<<endl;

 
    }


    
    return 0;
}