             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

// #define ll         long long int
#define int            int64_t
#define all(x)        x.begin(),x.end()
#define rall(x)       x.begin(),x.end()
#define for(i,a,b)    for(int i = a ; i<b ; i++)
#define forr(j,c,d)   for(int j = c ; j>=d ; j--)
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

int c = 0;
int seq(int n){
    c++;
    if(n==1) return c;
    if(n==2) return c;
    if(n%2==0) return seq(n/2);
    else return seq(3*n+1);
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    
    if(n==1) cout<<1;
    else cout<<seq(n)+1;

 //  seq(n);
//    if(n==1) cout<<1;
//    else if(n==2) cout<<2;
//    else cout<<c+1<<endl;
    nn;




    
    return 0;
}