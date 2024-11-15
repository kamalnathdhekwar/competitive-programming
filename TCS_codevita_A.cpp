
#include<bits/stdc++.h>
using namespace std;

#define int            int64_t
#define all(x)        x.begin(),x.end()
#define rall(x)       x.rbegin(),x.rend()
#define forn(i,a,b)   for(int i = a ; i<b ; i++)
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
#define umpi          unordered_map<int,int>
#define umpc          unordered_map<char,int>
#define nn            cout<<"\n"



int solve(string s, map<string ,vector<vector<string>>> mp1, map<string,int> mp2){

    if(!(mp1.find(s)!=mp1.end())) {
        return 0;
    }

    if(mp2.find(s)!=mp2.end()){
        return mp2[s];
    }

    int ans = INT_MAX;

    fora(x,mp1[s]){
        int k = x.size();
        vector<string> t = x;
        
        k--;
        fora(y,t){
            int curA= solve(y,mp1,mp2);
            k+=curA;
           
        }
        ans = min({ans,k});

    }

    return mp2[s]=ans;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    map<string ,vector<vector<string>>> mp1;
    map<string,int> mp2;

    while(n--){
       string curr ;
       cin>>curr;

       int m = curr.length();

       vector<string> curi;

       string p = "";
       string i = "";
       
       string temp = "";

       for(int i = 0 ; i<m ; i++){
           if(curr[i]=='='){
            p=temp;
            temp ="";
           }
           else if(curr[i]=='+'){
               curi.pb(temp);
               temp="";
           }
           else temp+=curr[i];
       }

    //    forn(i,0,curi.size()){
    //     cout<<curi[i]<<" ";
    //    }
    //    nn;

       curi.pb(temp);

       mp1[p].pb(curi);

    }

    string last ;
    cin>>last;

    // if(!(mp1.find()!=mp1.end())) {
    //     cout<<0;
    //     continue;
    // }

    cout<<solve(last,mp1,mp2);

   // cout<<1;
    



    
    return 0;
}