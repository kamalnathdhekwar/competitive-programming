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
#define pb            push_back
#define mvi           vector<int>
#define mvc           vector<char>
#define mvs           vector<string>
#define mpi           map<int,int>
#define mpc           map<char,int>
#define umps          unordred_map<int,int>
#define nn            cout<<"\n"

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;

        mpc m1;
        mpc m2;
        fora(x,a) m1[x]++;
        fora(x,b) m2[x]++;

        // sort(all(a));
        // sort(all(b));
       
         int n = a.length();
        int m = b.length();

        

        int res = m;
      
        forn(i,0,b.length()){
            
            int x = i;
            int curr = i;
            forn(j,0,a.length()){
                if(a[j]==b[x]){
                      x++;

                      if(x==m) break;
                }

                
            }

            res=min(res,curr+m-x);
        }
        
       
      
             cout<<res+n<<endl;
 
        
    }


    
    return 0;
}