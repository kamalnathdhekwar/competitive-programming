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
#define mpc           map<char,int>
#define umps          unordred_map<int,int>
#define nn            cout<<"\n"

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll x,y,z,k,ans=0;
	cin>>x>>y>>z>>k;
 
	forn(i,1,x){
		forn(j,1,y){
 
			if(k%(i*j)==0 && k/(i*j)<=z){
				ll w = k/(i*j);
				ll positions = (x-i+1) * (y-j+1) * (z-w+1);
 
				ans= max(ans,positions);
 
			}
		}
	}
	cout<<ans<<endl;
    }


    
    return 0;
}