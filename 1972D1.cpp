             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;


#define int int64_t
#define ll            long long int
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
// #define nn            cout<<endl

 
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		int cnt = 0;
		for(int b=1;b<=m;b++) {
			for(int a=b;a<=n;a+=b) {
				if((a+b)%(b*__gcd(a, b))==0) {
					cnt++;
				}
			}
		}
		cout << cnt << "\n";
	}
}