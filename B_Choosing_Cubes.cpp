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
        int n,f,k;
        cin>>n>>f>>k;

        mvi v(n);
        int key = 0;
        int c = 0;
        forn(i,0,n) {
            cin>>v[i];
            if(i+1==f) {
                key = v[i];
                c++;
            }
        }

        sort(all(v), greater<int>());
       
       int flagy =0;
       int flag =0;
       int flagn=0;
        forn(i,0,k) if(v[i]==key) {
            flag++;
            flagy++;
            break;
        }
         flagn = 0;
        forn(i,k,n) if(v[i]==key){
             flag++;
             flagn=1;
          break;

        }

        if(flag==2) cout<<"MAYBE"<<endl;
        else if(flagy==1 && flagn==0) YES;
        else if(flagy==0 && flagn==1) NO;
       
    }


    
    return 0;
}