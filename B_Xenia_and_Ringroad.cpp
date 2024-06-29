             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

// #define ll         long long int
#define int            int64_t
#define all(x)        x.begin(),x.end()
#define rall(x)       x.begin(),x.end()
// #define forn(i,a,b)    for(int i = a ; i<b ; i++)
// #define forr(j,c,d)   for(int j = c ; j>=d ; j--)
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
#define bs            binary_search

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
        int n,m,time=0,a=0,b;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>b;
        if(a>b){
            time+=(n-a)+b;
        }
        else if(a==b){
            time+=0;
        }
        else{
            time+=(b-a);
        }
        a=b;
    }
    cout<<time-1;
    }


 