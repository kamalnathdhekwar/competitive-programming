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
       int n;
       cin>>n;
       mvi v(n);
       forn(i,0,n) cin>>v[i];

       string s;
       cin>>s;

       mvi p(n);

       p[0]=v[0];

       int ans = 0;
       forn(i,1,n) p[i]=p[i-1]+v[i];

    //    forn(i,0,n){
    //     if(s[i]=='R') continue;

    //     forn(j,i+1,n){
    //        if(s[j]=='L') continue;

    //        if(s[i]=='L' && s[j]=='R'){
    //          ans+=p[j]-p[i]+v[i];
    //          s[j]='.';

    //          if(j<n && s[j+1]=='R') i--;
    //         break;
    //        }
    //     }
    //    } 

    int i = 0 ;
    int j = n-1;

    while(i<j){
        if(s[j]=='L'){
            j--;
            continue;
        }
        if(s[i]=='R'){
            i++;
            continue;
        }
        if(s[i]=='L' && s[j]=='R'){
        ans+=p[j]-p[i]+v[i];
        i++;
        j--;
        }
    }

    //cout<<p[n-1]<<endl;



       cout<<ans<<endl;
     
    }


    
    return 0;
}