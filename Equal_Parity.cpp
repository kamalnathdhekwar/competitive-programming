#include<bits/stdc++.h>
using namespace std;

#define int            int64_t
#define all(x)        x.begin(),x.end()
#define rall(x)       x.rbegin(),x.rend()
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
#define umps          unordered_map<int,int>
#define nn            cout<<"\n"
#define bs            binary_search

bool isPrime(int n) { if (n==1) return 0; for (int i=2;i<=round(sqrt(n));++i) if (n%i==0) return 0; return 1; }

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        n*=2;

        mvi v(n);
        int e=0,o=0;
        fora(a, v) {
            cin >> a;
            if(a%2==0) e++;
            else o++;
        }

        if(e==n/2){
            YES;
            continue;
        }
        else if(o==n){
            NO;
            continue;
        }


        int i = 0;
        int c = 0;
        while(i<n){
           if(v[i]%2==0){
             int temp =v[i];

             while(temp>2){
               temp/=2;
               if(temp%2==1) break;
               c++;

             }
           }
           i++;
        }

       // cout<<c<<endl;

        if(c+e<=n/2) NO;
        else YES;
       // else YES;






    }

    return 0;
}