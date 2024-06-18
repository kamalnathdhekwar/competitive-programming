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
#define mpc           map<char,int>
#define umps          unordred_map<int,int>
#define nn            cout<<"\n"

bool is_valid_number(int num) {
    return (num % 3 != 0) && (num % 10 != 3);
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;

        mvi v;
        
        int i = 1;
        while (v.size() <= k) {
        if (is_valid_number(i)) {
            v.push_back(i);
        }
        i++;
        }

        cout<<v[v.size()-2];
        nn;
        
    }


    
    return 0;
}