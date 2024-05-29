             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

// #define ll         long long int
#define int            int64_t
#define all(x)         x.begin(), x.end()
#define rall(x)        x.rbegin(), x.rend()
#define forn(i, a, b)  for(int i = a; i < b; i++)
#define forr(j, c, d)  for(int j = c; j >= d; j--)
#define fora(a, b)     for(auto& a : b)
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

bool check(string s,string t){
    string curr = s+t;
    string ncurr = curr;
    reverse(all(curr));
    return curr==ncurr;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        mvs v(2*n-2);
        
        forn(i,0,v.size()) cin>>v[i];
        //sort(all(v));
  
        mvs t;
        mvs s;
        forn(i,0,v.size()){
            if(v[i].length()==n-1) t.push_back(v[i]);
            
        }
        

        
        sort(all(t));

        //  forn(i,0,t.size()) {
        //     cout<<t[i]<<" ";
        // }
        //  nn;
       

         if(check(t[0],t[1])) YES;
         else NO;
         
      
     
    }


    
    return 0;
}