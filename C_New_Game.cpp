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


bool mysort(pair<int,int> &a , pair<int,int> &b){
  if(a.first==a.first) return  a.second<b.second;
  return  a.first>a.first;
}

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
  

      mpi mp;
      fora(x,v) mp[x]++;
      
    

      int sum = 0;
      int prev = -1;
      int st = -1;
      
      int maxi = 0;
      
      int c= 1;
      int curr =0;
      int flag = 0;
      fora(x,mp){
        
        if(prev==-1 || x.first-prev<=1){
          curr+=x.second;
          c++;
          flag = 0;
          prev = x.first;
        }
        else {
          c=1;
          prev=-1;
          flag = 1;
        }
        
          sum = max(sum,curr);
        
        if(c>k || flag ==1){
           
           if(mp[x.first-1]==0) curr = 0;
           else curr-=mp[x.first-1];
           c--;
        }
        
        sum = max(sum,curr);
        
      }



    cout<<sum<<endl;

    }
    
    // 6
    // 3
    // 9
    // 2

    
    return 0;
}