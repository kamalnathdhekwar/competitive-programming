#include<bits/stdc++.h>
using namespace std;

#define int            int64_t
#define all(x)        x.begin(),x.end()
#define rall(x)       x.rbegin(),x.rend()

#define mvi           vector<int>
#define mvc           vector<char>
#define mx(x)        *max_element(all(x))
#define mn(x)        *min_element(all(x))
#define forn(i,a,b)   for(int i = a ; i<b ; i++)
#define forr(j,c,d)   for(int j = c ; j>=d ; j--)
#define fora(a,b)     for(auto& a : b)
#define pb            push_back
#define mpi           map<int,int>
#define mpc           map<char,int>


int32_t main() {

    int t;
    cin>>t;

    while(t--) {
      int n,y;
      cin>>n>>y;
      mvi v(n);

       mpi mp;

      forn(i,0,n) {
        cin>>v[i];
      }

      sort(all(v));
      
     int res = 0;
      
    forn(i,0,n) res|=v[i];

    res^=y;
    
    int k = 0;

    forn(i,0,n) k|=res^v[i];
    
    if(k==y) cout<<res;
    else cout<<-1;
    cout<<endl;


    
    
     
    }
    

}