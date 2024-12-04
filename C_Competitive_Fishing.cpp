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


bool valid(int k, int m , vector<int> t){

    int curr = 0;
    int i = 0 ;
    m--;

    while(i<m && i<t.size()){
        curr+=t[i];
        if(curr>=k) return true;
        i++;
    }

    return false;
}
int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
       int n ,k;
       cin>>n>>k;
       string s;
       cin>>s;

       mvi v,t;

       forn(i,0,n) v.pb(s[i]-'0');
       
       int p = 0;
       
      
      int i = n;
      i--;
      while(i>=0){
        t.pb(p);
        if(v[i]==1) p++;
        else p--;
        i--;
      }
    

       sort(rall(t));

       int left = 1,right=n;
       
       int res = INT_MAX;

       while(left<=right){
        int m = left+(right-left)/2;

        if(valid(k,m,t)==true){
            right = m-1;
            res = m;
        }
        else left = m+1;
       }
       

       if(res==INT_MAX) cout<<-1;
       else cout<<res;
       nn;




    }


    
    return 0;
}