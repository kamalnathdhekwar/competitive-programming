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
      int n,k,b,s;
      cin>>n>>k>>b>>s;

      if(k*b>s ){
        cout<<-1<<endl;
        continue;
      }
      else{

        mvi v;
          
          if(b*k+k-1<=s)  v.pb(b*k+k-1);
          else v.pb(s);
          n--;
          s-=b*k+k-1;

          while(n--){
            if(s>0){
                if(s<k-1)  v.pb(s);
                else v.pb(k-1);
                //cout<<k-1<<" ";
                s-=k-1;
            }
            else v.pb(0);
          }

          if(s>0) cout<<-1<<endl;
          else {
            forn(i,0,v.size()) cout<<v[i]<<" ";
            nn;
          }
      }



    }


    
    return 0;
}