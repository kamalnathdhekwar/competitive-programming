             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

// #define ll         long long int

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


int solve()
{
       int n;cin>>n;string s;
    cin>>s;
    map<char,int>mp;
    for(auto it:s)mp[it]++;
    vector<pair<int,char>>v;
    for(auto it:mp){
        v.push_back({it.second,it.first});
    }
    sort(v.rbegin(),v.rend());  
    string ans="";
    string temp="";
    for(auto it:v)temp.push_back(it.second);
    int sum=0;
    int i=v.size()-1;
  
    while(i>=0){
 
        int req=v[i].first-sum;
      
        for(int j=0;j<req;j++)ans+=temp;
        sum+=req;
        // debug(temp)
        temp.pop_back();
 
        i--;
    }
    cout<<ans<<endl;
    return 0;
}
 
 

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
