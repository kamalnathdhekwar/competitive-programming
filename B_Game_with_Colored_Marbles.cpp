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
        cin>>n;
        mvi v(n);
        forn(i,0,n) cin>>v[i];

        mpi mp;
        fora(x,v) mp[x]++;

        vector<pair<int,int>> pp;

        fora(x,mp){
            pp.push_back({x.second,x.first});
        }


        sort(all(pp));

        mvi a,b;

        while(true){

            if(pp.size()<=0) break;
            
            sort(all(pp));
            a.pb(pp[0].second);
            pp[0].first--;

             if(pp[0].first==0) pp.erase(pp.begin());

            if(pp.size()<=0) break;
           
            sort(all(pp));
            b.pb(pp[0].second);
            pp[0].first--;
            if(pp[0].first==0) pp.erase(pp.begin());

        }


        int ans = 0;
        
        set<int> st;

        // forn(i,0,a.size()) cout<<a[i]<<" ";
        // nn;

        //  forn(i,0,b.size()) cout<<b[i]<<" ";
        // nn;

        fora(x,b) st.insert(x);

        fora(x,a){
            if(!(st.find(x)!=st.end())) ans++;
        }
        int one = 0;

        fora(x,mp) if(x.second==1) one++;

        int key = ((one+1)/2)*2;

       

        //cout<<ans<<endl;
        
        // forn(i,0,a.size()){
        //      int flag = 0;
        //     forn(j,0,b.size()){
        //         if(a[i]==b[j]){
        //            flag=1;
        //            break;
        //         }
        //     }
        //     if(flag==0) ans++;
        // }
        
        if(n==1) cout<<2;
        else if(mp.size()==1) cout<<1;
        else if(mp.size()==n) cout<<((n+1)/2)*2;
        else cout<<mp.size()+key-one;
        nn;

    }


    
    return 0;
}