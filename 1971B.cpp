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
#define mps           map<string,int>
#define umpi          unordered_map<string,int>
#define umps          map<int,int>
#define nn            cout<<"\n"

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
    
        map<char,int> mp;

        for(i,0,s.length()){
            mp[s[i]]++;
        }

        if(mp.size()==1) NO;
        else {
            YES;

            for(i,0,s.length()){
                if(s[i]!=s[i+1]){
                    swap(s[i],s[i+1]);
                    break;
                }
            }

            cout<<s;
        }

        nn;
        nn;
        
    }


    
    return 0;
}