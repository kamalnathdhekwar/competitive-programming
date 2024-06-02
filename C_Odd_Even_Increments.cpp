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

bool check(vector<int> v,int n){
    int ceven = 0;
    int codd = 0;
    forn(i,0,n) {
        if(v[i]%2==0) ceven++;
        else codd++;
    }

    return ceven==n || codd==n;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        mvi v(n);
         
         int odd= 0;
        forn(i,0,n) {
            cin>>v[i];
        }
        
        int flag = 0;
        forn(i,0,n){
            if(i%2==0) v[i]+=1;
        }

        //forn(i,0,n) cout<<v[i]<<" ";

        //nn;

    

        if(check(v,n)==true) flag = 1;


        forn(i,0,n){
            if(i%2==1) v[i]+=1;
        }
        
        if(check(v,n)) flag = 1;

        if(flag==1) YES;
        else NO;
         

    }


    
    return 0;
}