             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

// #define ll         long long int
#define int            int64_t
#define all(x)        x.begin(),x.end()
#define rall(x)       x.begin(),x.end()
// #define for(i,a,b)    for(int i = a ; i<b ; i++)
// #define forr(j,c,d)   for(int j = c ; j>=d ; j--)
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
        int n; 
        cin>>n;
        mvi v(n);
        for(int i = 0 ; i<n ; i++) cin>>v[i];

        map<int, int> mp;
        for(int i = 0; i < n; i++){
           mp[v[i]]++;
        }

        int odd = 0;
        int even = 0;
        for(auto x:mp){
            
            if(x.second % 2) odd++;
            else even++;
        }

        cout<<odd+even-even%2<<endl;


    }

    }


 