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

#define int long long
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " " << x << endl;
#else
#define debug(x)
#endif
const int MOD=1e9+7;
int32_t main(){
#ifndef ONLINE_JUDGE
   freopen("Error.txt","w",stderr);
#endif 
    int t;
    cin>>t;
    while(t--){
        stack<int>st;
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<n; i++){
            if(s[i]=='('){
                st.push('(');
            }
            else{
                if(!st.empty()){
                    if(st.top()=='('){
                        st.pop();
                    }
                    else{
                        st.push(')');
                    }
                }
                else{
                    st.push(')');
                }
            }
        }
        int ans=st.size()/2;
        cout<<ans<<endl;
    }
}