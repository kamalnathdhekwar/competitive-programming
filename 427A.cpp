             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

// #define ll         long long int
#define int            int64_t
#define all(x)        x.begin(),x.end()
#define rall(x)       x.begin(),x.end()
#define for(i,a,b)    for(int i = a ; i<b ; i++)
#define forr(j,c,d)   for(int j = c ; j>=d ; j--)
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

   
        int n;
        cin>>n;

        mvi v(n);
        int none = 0;
        for(i,0,n) {
            cin>>v[i];

            if(v[i]==-1) none++;

        }

        int fone=0;

        for(i,0,n){
           if(v[i]>0){
            int curr = v[i];
            while(curr>0){
                if(i<n) i++;
                curr+=v[i];
                if(v[i]==-1) {
                    fone++;
                    v[i]=-2;
                }
            }
           }
        }

        cout<<none-fone<<endl;


    }


    
