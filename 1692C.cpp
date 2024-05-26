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
    while(t--){
        int n = 8;
        mvi vr,vc;

        while(n--){
            string s;
            cin>>s;
            int c = 0;
            for(i,0,8) {
                if(s[i]=='#') {
                    c++;
                    vc.push_back(i+1);
                }
            }
            vr.push_back(c);
         
        }

        // for(i,0,8) cout<<vr[i]<<" ";
        // nn;
        // for(i,0,vc.size()) cout<<vc[i]<<" ";
        // nn;

     int row = 0;
     for(i,1,8-1){
        if(vr[i-1]==2 && vr[i]==1 && vr[i+1]==2) row = i;
     }
     
     int sum = 0;
     for(i,0,row+1) sum+=vr[i];

     //cout<<sum<<" sum"<<endl;
     
     // correction.... 
     cout<<row+1<<" "<<vc[sum-1]<<endl;
   

    }


    
    return 0;
}