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
      int n,k;
      cin>>n>>k;
      mvi v(n);

       mpi mp;

      forn(i,0,n) {
        cin>>v[i];
        mp[v[i]]++;
      }

      sort(all(v));
      
      int key  = 0;
      int flag = 0;
      
      if(!(mp.find(0)!=mp.end())){
        cout<<mn(v)-1<<endl;
         continue;
      }


      fora(x,mp){
        if(x.second<=k){
            key = x.first;
            flag= 1;
            break;
        }
      }


     if(flag==1){
        cout<<key<<endl;
        continue;
        
     }
     else cout<<v[n-1]+1<<endl;

    //  key = 0;
     
    //  mvi a ,b;
    //  forn(i,k,n) a.pb(v[i]);
    //  forr(i,n-k-1,0) b.pb(v[i]);


    // //  fora(i,0,a.size()){
    // //     if(a[i])
    // //  }

     
    //  if(key-1>=0) cout<<key-1<<endl;
    //  else cout<<key<<endl;
     
    }
    

}