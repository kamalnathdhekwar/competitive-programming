             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

// #define ll         long long int
#define ll            int64_t
#define all(x)        x.begin(),x.end()
#define rall(x)       x.begin(),x.end()
// #define for(i,a,b)    for(ll i = a ; i<b ; i++)
// #define forr(j,c,d)   for(ll j = c ; j>=d ; j--)
#define yes           cout<<"Yes"<<endl
#define no            cout<<"No"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl
#define mvi           vector<ll>
#define mvc           vector<char>
#define mvs           vector<string>
#define mpi           map<ll,ll>
#define mps           map<string,string>
#define umpi          map<string,string>
#define umps          map<ll,ll>
#define nn            cout<<endl

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    set<int> levels;
	  int q,y;
	  cin>>q;
	  for(int i=0;i<q;i++){
		  int x;
		  cin>>x;
		  levels.insert(x);
	  }
	  cin>>y;
	  for(int i=0;i<y;i++){
		  int w;
		  cin>>w;
		  levels.insert(w);
	  }
	  if(levels.size()==n)
		  cout<<"I become the guy.";
	  else
		  cout<<"Oh, my keyboard!";
    return 0;
}