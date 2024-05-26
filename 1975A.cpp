             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

// #define ll         long long int
#define int            int64_t
// #define all(x)        x.begin(),x.end()
// #define rall(x)       x.begin(),x.end()
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

bool isSorted(vector<int> v){
    for(i,0,v.size()-1){
        if(v[i+1]<v[i]) return false;
    }
    return true;
}



int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        mvi v(n);
        for(i,0,n) cin>>v[i];

        //int mini = *min_element(all(v));
        
        int flag = 0;
        
        int c = 0;
       
          for(i,0,n){
            mvi temp = v;
              if(isSorted(v)) {
                flag = 1;
                break;
              }
            rotate(v.begin(), v.begin() + 1, v.end());  
          }


        if(flag==1) YES;
        else NO;

    }


    
    return 0;
}