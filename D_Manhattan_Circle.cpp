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
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        
        int r = n;
        mvi rc ;
        mvi cc ;

       mvs v(n);
        forn(i,0,n){
          cin>>v[i];
        }

        int row = 0;
        int col = 0;
        int maxr = INT_MIN;
        int maxc = INT_MIN;

       forn(i,0,n){
        int c = 0;
        forn(j,0,m){
            if(v[i][j]=='#') c++;
        }
        if(c>maxr){
            maxr = c;
            row = i;
        }
       }

       forn(j,0,m){
           int c = 0;
        forn(i,0,n){
            if(v[i][j]=='#') c++;
        }
         if(c>maxc){
            maxc = c;
            col = j;
        }
       }

         cout<<row+1<<" "<<col+1<<endl;
        

    }


    
    return 0;
}