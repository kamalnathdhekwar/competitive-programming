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
        int n;
        cin>>n;
        mvi a(n),b(n);
        forn(i,0,n) cin>>a[i];
        forn(i,0,n) cin>>b[i];

        int mini1 = *min_element(all(a));
        int mini2 = *min_element(all(b));
        int c = 0;
         forn(i,0,n){
            if(a[i]!=mini && b[i]!=mini){
                a[i]-=min(a[i],b[i])+1;
                b[i]-=min(a[i],b[i])+1;
                c+=min(a[i],b[i])-1;
            }
        }

        forn(i,0,n){
            if(a[i]!=mini) c+=a[i]-mini;
            if(b[i]!=mini) c+=b[i]-mini;
        }

        cout<<c<<endl;
        

    }


    
    return 0;
}