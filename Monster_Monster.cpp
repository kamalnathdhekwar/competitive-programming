             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

// #define ll         long long int
#define int            int64_t
#define all(x)        x.begin(),x.end()
#define rall(x)       x.begin(),x.end()
#define forn(i,a,b)    for(int i = a ; i<b ; i++)
#define forr(j,c,d)   for(int j = c ; j>=d ; j--)
#define fora(a,b)     for(auto& a : b)
#define yes           cout<<"Yes"<<endl
#define no            cout<<"No"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl
#define mvi           vector<int>
#define mvc           vector<char>
#define mvs           vector<string>
#define mpi           map<int,int>
#define mps           map<string,string>
#define umpi          map<string,string>
#define umps          map<int,int>
#define nn            cout<<"\n"

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     int t;
    cin >> t;
  

    while(t--) {
       int n,x;
       cin>>n>>x;
       
       mvi v(n);
       forn(i,0,n) cin>>v[i];
       
       //priority_queue<int> pq;
       
       sort(all(v));
       
       int ans = INT_MIN;
      reverse(all(v));
       
       forn(i,1,n+1){
           ans=max(ans,v[i-1]+x*i);
       }
       
    //   forn(i,0,n) cout<<v[i]<<" ";
    //   nn;
       
       
    //   fora(y,v) pq.push(y);
       
  
       
    //   while(!pq.empty()){
    //       int curr = pq.top();
    //       ans = max(ans,curr);
           
           
    //       pq.pop();
           
           
    //       mvi t;
    //       while(!pq.empty()){
    //           int c = pq.top();
    //           pq.pop();
    //           t.push_back(x+c);
    //       }
           
    //       fora(y,t) pq.push(y);
    //   }
       
     cout<<ans-x<<endl;
        
    }
    
    return 0;
}