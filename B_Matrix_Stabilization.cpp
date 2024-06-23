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

void change(int n,int m , vector<vector<int>>& v){
    
   
      
         forn(i,0,n){
            forn(j,0,m){
               
         int maxi = INT_MIN;
         int flag = 0; 

                if(i<n-1 ) {
                    maxi = max(maxi,v[i+1][j]);
                }
                if(i>0) {
                    maxi = max(maxi,v[i-1][j]);
                }
                if(j>0 ) {
                    
                      maxi = max(maxi,v[i][j-1]);
                }
                if(j<m-1) {
                    
                      maxi = max(maxi,v[i][j+1]);
                }
            //  ....................
                if(i<n-1 && v[i][j]<=v[i+1][j]) {
                   flag=1;
                }
                if(i>0 && v[i][j]<=v[i-1][j]) {
                  
                    flag=1;
                }
                if(j>0 && v[i][j]<=v[i][j-1]) {
                    
                     flag=1;
                }
                if(j<m-1 && v[i][j]<=v[i][j+1]) {
                    
                    flag=1;
                }

               
            if(flag==0) v[i][j]=maxi;

            }

        }

        

    }

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        vector<vector<int>> v(n,vector<int>(m));

        forn(i,0,n){
            forn(j,0,m){
                cin>>v[i][j];
            }
        }

        // int c = 0;
        // if(n>=3 && m>=3){
        //     forn(i,0,n){
        //         mpi mp;
        //         forn(j,0,m){
        //             mp[v[i][j]]++;
        //         }
        //         if(mp.size()==n-1) c++;
        //     }
        // }

        
        
        // if(c==n){
        //    forn(i,0,n){
        //     forn(j,0,m){
        //         cout<<1<<" ";
        //     }
        //     nn;
        // }
        // }
        // else {

        change(n,m,v);
        forn(i,0,n){
            forn(j,0,m){
                cout<<v[i][j]<<" ";
            }
            nn;
        }
        }
       
    


    
    return 0;
}