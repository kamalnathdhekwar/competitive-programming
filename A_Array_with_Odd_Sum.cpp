             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

// #define ll         long long int
#define int            int64_t
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
#define umps          unordred_map<int,int>
#define nn            cout<<"\n"
#define bs            binary_search
#define mx(x)        *max_element(all(x))
#define mn(x)        *min_element(all(x))

bool isPrime(int n) { if (n==1) return 0; for (int i=2;i<=round(sqrt(n));++i) if (n%i==0) return 0; return 1; }


//..............................................................................................................................................................


int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
   cin>>t;
   int n;
   int sum;
   int odd;
   int even;
   
   for(int i=0;i<t;i++){
       cin>>n;
       sum=0;
       odd=0;
       even=0;
       int arr[n];
       for(int j=0;j<n;j++){
           cin>>arr[j];
           if(arr[j]%2!=0 || arr[j]==1){
               odd++;
           }else{
               even++;
           }
           sum+=arr[j];
       }
       
       if(sum%2!=0 || sum==1){
           cout<<"YES"<<endl;
       }
       else{
           if(odd!=0 && even!=0){
               cout<<"YES"<<endl;
           }
           else{
               cout<<"NO"<<endl;
           }
       }
   }
   
   
}