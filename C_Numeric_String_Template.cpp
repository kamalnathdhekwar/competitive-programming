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
#define umpci         unordered_map<char,int>
#define umpic         unordered_map<char,int>
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
      int n;
      cin>>n;

      mvi v(n);
      forn(i,0,n) cin>>v[i];

      int m;
      cin>>m;
     
      while(m--){
        string s;
        cin>>s;
        
        if(s.length()!=n){
            NO;
            continue;
        }

        unordered_map<int,char> m1;
        unordered_map<char,int> m2;

        
      
        bool flag = true;
        forn(i,0,n){

            int k = v[i];
            char c=s[i];

            if(( m1.count(k) && m1[k]!=c)) {
                flag = false;
                break;
            }
           if(( m2.count(c) && m2[c]!=k)){
                 flag = false;
                 break;
            }
           
            m1[k]=c;
            m2[c]=k;
        }


        if(flag) YES;
        else NO;
        

      }
 nn;

     


    }


    
    return 0;
}