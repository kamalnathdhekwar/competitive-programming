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
        int n ;
        int x;
        cin>>n>>x;
        mvi v(n);

        forn(i,0,n) cin>>v[i];
        
        sort(all(v));
        
        int c = 0;
        forn(i,0,n){
            if(v[i]>=x) c++;
        }
        
        if(n==1){
            cout<<x+v[0]<<endl;
        
        }
        // else if(c==n){
        //     cout<<mn(v)+1;
        //     nn;
    
        // }
        else {

            int l = 0 ,  r = 1e10;
            
            int ans = 0;
            
            vector<pair<int,int>> vp;

            while(l<r-1){
                int mid = l+(r-l)/2;
                 
                int curr = 0;

                forn(i,0,n) {
                    if(v[i]<mid) curr+=mid-v[i];
                }

                vp.pb({mid,curr});

                
                 if(curr>x) r = mid;
                else l = mid;

            }
            
            sort(all(vp));
            //forn(i,0,vp.size()) cout<<vp[i].first<<" "<<vp[i].second<<endl;
         
            forn(i,0,vp.size()){
                if(vp[i].second>x) {
                    ans = vp[i-1].first;
                    break;
                }
                else if(vp[i].second==x) {
                    ans = vp[i].first;
                    break;
                }
        }
           cout<<ans<<endl;
        }


    }


    
    return 0;
}