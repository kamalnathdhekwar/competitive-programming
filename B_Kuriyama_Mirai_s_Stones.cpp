             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

// #define ll         long long int

#define all(x)        x.begin(),x.end()
#define rall(x)       x.rbegin(),x.rend()
#define forn(i,a,b)   for(int i = a ; i<b ; i++)
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
#define umpi          unordered_map<int,int>
#define umpc          unordered_map<char,int>
#define nn            cout<<"\n"
#define bs            binary_search
#define mx(x)        *max_element(all(x))
#define mn(x)        *min_element(all(x))

bool isPrime(int n) { if (n==1) return 0; for (int i=2;i<=round(sqrt(n));++i) if (n%i==0) return 0; return 1; }
int sumv(vector<int>v) { int sum = 0 ;for (int i=0;i<v.size();++i) sum+=v[i]; return sum; }


//..............................................................................................................................................................


int main() {
int n;
cin>>n;
long long arr[n]={};
long long arr2[n]={};
for(int i=0;i<n;i++){
	cin>>arr[i];
	arr2[i]=arr[i];
}
sort(arr2,arr2+n);
for(int i=1;i<n;i++){
	arr[i]=arr[i-1]+arr[i];
	arr2[i]=arr2[i-1]+arr2[i];
 }
int q;
cin>>q;
 for(int i=0;i<q;i++){
	int t,r,l;
	cin>>t>>l>>r;
	l-=1;
	r-=1;
	if(t==1){
		if(l==0)
	cout<<arr[r]<<endl;
	else {
			cout<<arr[r]-arr[l-1]<<endl;
	}
	}
	else {
		if(l==0)
			cout<<arr2[r]<<endl;
			else {
				cout<<arr2[r]-arr2[l-1]<<endl;

			}
	}
}



	return 0;
}