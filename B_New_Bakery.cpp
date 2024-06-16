             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

// #define ll         long long int
#define int            long long int
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
#define mpc           map<char,int>
#define umps          unordred_map<int,int>
#define nn            cout<<"\n"

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;

        if(b<=a){
            int res = n*a;
           cout<<res;
           nn;
        }
        else {
   
        
        int sum = 0;
       int k = min(n,b-a+1);
        
        // Sum of first k terms from b to (b - k + 1)
       sum = k * (b + (b - k + 1)) / 2;

        sum+=(n-k)*a;
        
          cout<<sum;
          nn;
        }

     
        
    }


    
    return 0;
}