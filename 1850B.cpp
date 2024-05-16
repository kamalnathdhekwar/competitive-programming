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

    int t;
    cin>>t;
    mvi ans;
    while(t--){
        int n;
        cin>>n;
        int c = 0;
        mvi aa;
        mvi bb;
        while(n--){
            int a,b;
            cin>>a>>b;
            if(a>10){ 
            aa.push_back(0);
            bb.push_back(0);
            }
            else {
            aa.push_back(a);
            bb.push_back(b);
            }
        }
        

        // for(i,0,aa.size()) cout<<aa[i]<<" ";
        // for(i,0,aa.size()) cout<<bb[i]<<" ";
        // nn;
        
        int k = 0;
         int curr=bb[0];
        for(i,0,aa.size()){
            if(aa[i]<=10){
               
                if(curr<=bb[i]){
                    curr=bb[i];
                    k = i+1;
                }
            }
        }

       if(aa.size()==1 && aa[0]<=10) cout<<1;
       else cout<<k;
       nn;
       

        
    }
   
 

    
    
    return 0;
}