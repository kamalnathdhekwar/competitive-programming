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

int findSum(vector<int> v, int x){
    int sum = 0;
         
        forn(i,0,v.size()){
            double y = v[i];
            
            sum+=ceil(y/x);
        }
        return sum;
}
int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;

        vector<int > v(n);
        
        int c = 0;
        forn(i,0,n) {
            cin>>v[i];
            if(v[i]%x==0) c++;
        }

       

        int sum = 0;
         
        forn(i,0,v.size()){
            double y = v[i];
           // cout<<ceil(y/x);
            sum+=ceil(y/x);
        }

         int mini = sum;
        int maxi = sum;
         
        
        while(n>1){
            
            mini = min(mini,findSum(v,x));
            maxi = max(maxi,findSum(v,x));
            v[v.size()-2] = v[v.size()-1]+v[v.size()-2];
             v.pop_back();
            n--;
        }
        
        
       // if(c==n) cout<<sum<<" "<<sum;
     cout<<mini<<" "<<maxi;

      //cout<<round(3.4)<<endl;
        nn;


    }


    
    return 0;
}