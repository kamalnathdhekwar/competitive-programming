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
        int n = 0;
        cin>>n;
        mvi v(n);

        
        int sum = 0;
        int cn = 0;
        int asum=0;
        forn(i,0,n) {
            cin>>v[i];
            if(v[i]<0) cn++;
            asum+=abs(v[i]);
        }
        
        int c = 0;
        mvi p(n);

        p[0] = v[0];
        
        // .... apply 2nd option only once .. so that final value will be max...
        // .... so just check where we can apply 2nd opration..
        //.... so for each i just check..and return max value of c

        forn(i,1,n){
            p[i]=p[i-1]+v[i];
        }

        int ans = 0;
        mvi anss;
       ans=abs(v[0])+p[n-1]-p[1]+v[1];
        forn(i,1,n-1){
            int r1 = p[i-1];
            int sumi = abs(r1+v[i]);
            int r2 = p[n-1]-p[i+1]+v[i+1];

             ans = max(ans,r2+sumi);
        }
        ans = max(ans,abs(p[n-1]));
        
        if(cn==1 && v[0]<0) cout<<asum<<endl;
        else cout<<ans<<endl;


      
        
    }


    
    return 0;
}