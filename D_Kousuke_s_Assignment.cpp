             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

#define ll        long long int          
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


int solve()
{
    ll n,s=0,count=0,p=-1;
    cin>>n;
    mvi a(n);
    forn(i,0,n)cin>>a[i];
 
 
    map<ll,ll> mp;mp[0]=1;
    ll c=0;
    forn(i,0,n){
 
        s = s + a[i];
        if(mp[s]>0){
            count+=1;
 
            p=0;
            mp.clear();
            mp[0]=1;
            s=0;
        }
        // cout<<mp[a[i]]<<endl;
        p=1;
        mp[s]++;
        if(p==0){
            c++;
        }
        
    }
    cout<<count<<endl;
    return 0;
}
 
 
/* Main()  function */
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(NULL);  
    int tc=1;
    cin>>tc;
 
    while(tc--)
    {
        solve();
    }
 
    return 0;
}