             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

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

/* Main()  function */
int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
       int n,k;
       cin>>n>>k;
    
    //   if(isPrime(n) ){
 
    //     if(ceil(n/2.0)==k){
    //         cout<<1;
    //         nn;
    //         cout<<1;
    //         nn;
    //         nn;
            
    //     }
    //     else cout<<-1<<endl;
 
    //     continue;
    //    }
       
       
       if(k==n && k!=1 && n!=1) cout<<-1<<endl;
        else if(n==1 || (n==3 && k==2)) {
        cout<<1<<endl;
        cout<<1<<endl;
       }
        else if(k==1) cout<<-1<<endl;
       else {

       cout<<3;
       nn;

       if(k%2==1)cout<<1<<" "<<k-1<<" "<<k+2<<endl;
        else cout<<1<<" "<<k<<" "<<k+1<<endl;
        

       }
    //    forn(i,1,n+1){
    //     cout<<i<<" ";
    //     i+=2;
    //    }
       

       nn;
       nn;



      
    }


    
    return 0;
}