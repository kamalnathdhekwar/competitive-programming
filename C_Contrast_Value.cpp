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
       int n;
       cin>>n;

       mvi v(n);

       forn(i,0,n) cin>>v[i];
       
       int con = 0;

       forn(i,0,n-1){
        con+=abs(v[i]-v[i+1]);
       }

       int state = 0;
       int c = 0;
       forn(i,0,n-1){
        if(v[i+1]<v[i] && state !=1){
            c++;
            state = 1;
        }
        else if(v[i+1]>v[i] && state !=-1){
            c++;
            state = -1;
        }
        
       }

    //cout<<con<<endl;

    //    if(con==0) cout<<1<<endl;
    //    else if(abs(v[n-1]-v[0])==con) cout<<2<<endl;
    //    else cout<<3<<endl;
    
    //    while(true){
          
    //       int flag = 0;

    //       if(v.size()>=2){

    //         forn(i,0,v.size()-2){
    //         if(v[i]<=v[i+1] && v[i+1]<=v[i+2]){
    //             v.erase(v.begin()+i+1);
    //             flag = 1;
    //         }
    //       }

    //       }
          
    //       if(v.size()>=2){
            
    //          forn(i,0,v.size()-2){
           
    //         if(v[i]>=v[i+1] && v[i+1]>=v[i+2]){
    //             v.erase(v.begin()+i+1);
    //             flag = 1;
    //         }
    //       }

    //       }
         
    //       if(flag==0) break;
    //    }

       if(con==0) cout<<1<<endl; 
       else cout<<c+1<<endl;
    }


    
    return 0;
}