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

    int l,r;
    cin>>l>>r;
  
    
    mvi a;

    for(int i = l ; i<=r ; i++){
        int n = i;
        string s = to_string(n);
        mvc v;
        map<char,int> mp;
        fora(x,s) mp[x]++;
        
        if(mp.size()<=2){
           fora(x,mp) v.pb(x.first);
        }

        if(v.size()==1 && (v[0]=='4' || v[0]=='7')) a.pb(i);
        else if(v.size()==2 && (v[1]=='4' && v[0]=='7') || (v[1]=='7' && v[0]=='4')) a.pb(i);

    }

     forn(i,r,r+1000){
        int n = i;
        string s = to_string(n);
        mvc v;
        map<char,int> mp;
        fora(x,s) mp[x]++;
        
        if(mp.size()<=2){
           fora(x,mp) v.pb(x.first);
        }
        
        sort(all(v));
        if(v.size()==1 && (v[0]=='4' || v[0]=='7')) {
            a.pb(i);
            break;
        }
        else if(v.size()==2 && (v[1]=='4' && v[0]=='7') || (v[1]=='7' && v[0]=='4')) {
            a.pb(i);
            break;
        }
    }
    
     int sum = 0;
     
    for(int i = l ; i<=r ; i++){
        for(int j = 0 ; j<a.size() ; j++){
            if(i<=a[j]){
                sum+=a[j];
                break;
            }
        }
    }

   
   

   cout<<sum<<endl;

    
    return 0;
}