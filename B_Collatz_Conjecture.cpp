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
        int x,y,k;
        cin>>x>>y>>k;

        int rem = x%y;
        rem=y-rem;
        
        if(rem==k) {
            int x2 = x+k;

            while(x2%y==0){
                x2=x2/y;
            }   

            cout<<x2<<endl;
        }
        else if(rem>k) cout<<x+k<<endl;
        else {
        
            while(true){

                int temp = rem;
              
                if(x==1) break;
                else if(k>=temp){
                    k-=temp;
                    x+=temp;

                    while(x%y==0){
                    x=x/y;
                   }

                 rem = y-x%y;
                }
                else {
                    x=x+k;
                    k=0;
                    break;
                }
            }
            if(k==0) cout<<x<<endl;
            else cout<<k%(y-1)+1<<endl;

        }

    }



    
    return 0;
}