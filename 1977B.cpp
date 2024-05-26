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
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        
        int p = pow(2,ceil(log2(x)));
        int n+1 = ceil(log2(p));
        mvi v(n+1,0);
        v[n]=1;

        if(x%2==1) v[0]=-1;

        // int curr = p-x;
        // for(int i = n-1 ; i>0 ; i--){
        //     if
        // }

        for(int i = 0 ; i<v.size() ; i++){
           cout<<v[i]<<" ";
        }
        
        
    }
    return 0;
}
