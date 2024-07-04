             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

// #define ll         long long int
#define int            int64_t
#define all(x)        x.begin(),x.end()
#define rall(x)       x.begin(),x.end()
// #define forn(i,a,b)    for(int i = a ; i<b ; i++)
// #define forr(j,c,d)   for(int j = c ; j>=d ; j--)
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
#define bs            binary_search

bool isPrime(int n) { if (n==1) return 0; for (int i=2;i<=round(sqrt(n));++i) if (n%i==0) return 0; return 1; }


//..............................................................................................................................................................


int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
       string s1 = "";
        string s2 = "";
        s1+=s[0];
        int j = 0;
        for(int i=1;i<s.size();i++){
            if(s[i]=='0'){
                // cout<<"he"<<" ";
                s1+=s[i];
            }
            else{
                j = i;
                break;
            }
        }
        for(;j<s.size();j++){
            s2+=s[j];
        }
        
         int aa = stoi(s1);
        int bb = stoi(s2);
        // cout<<s1<<" "<<s2<<endl;
        // cout<<a<<" "<<b<<endl;
        if(aa>=bb){
            cout<<-1<<endl;
        }
        else{
            cout<<s1<<" "<<s2<<endl;
        }
    }
}