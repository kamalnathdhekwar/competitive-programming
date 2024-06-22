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
        if(n==1){
            cout<<1<<endl;
        }
        else {
            if(n%2==0){
               cout<<2<<" "<<1<<" ";
               n = n-2;
               int prev = 1;
               while(n>0){
               
                cout<<prev+3<<" ";
                prev+=3;
                n--;
                if(n==0) break;
                cout<<prev-1<<" ";
                prev--;
                n--;
                if(n==0) break;
               }
               
            }
            else {
               cout<<1<<" "<<3<<" ";
               n = n-2;
                int prev = 3;
               while(n>0){
                cout<<prev-1<<" ";
                prev--;
                n--;
                if(n==0) break;
                cout<<prev+3<<" ";
                prev+=3;
                n--;
                if(n==0) break;
               }

            }
        }
       
    }


    
    return 0;
}