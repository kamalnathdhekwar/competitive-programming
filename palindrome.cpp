             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

// #define ll         long long int
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
#define bs            binary_search
#define mx(x)        *max_element(all(x))
#define mn(x)        *min_element(all(x))

bool isPrime(int n) { if (n==1) return 0; for (int i=2;i<=round(sqrt(n));++i) if (n%i==0) return 0; return 1; }
int sumv(vector<int>v) { int sum = 0 ;for (int i=0;i<v.size();++i) sum+=v[i]; return sum; }


//..............................................................................................................................................................

  bool isPali(string s){
        int i = 0 ; 
        int j = s.length()-1;

        while(i<j){
            if(s[i]!=s[j]) return false;
            i++;
            j--;

        }
        
        // string t = s;
        // reverse(t.begin(),t.end());
        // return t==s;
        return true;
     }

    string longestPalindrome(string s) {
        vector<string> v;
        
        if(s.length()==1) return s;

        for(int i = 0 ; i<s.length() ; i++){
            for(int j = i ; j<s.length() ; j++){
                v.push_back(s.substr(i,j-i+1));
            }
        }
        
        string ans = v[0];

        for(int i = 0 ; i<v.size() ; i++){
            if(isPali(v[i]) && v[i].length()>ans.length()){
                ans = v[i];
            }
        }

        return ans;
    }

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    string s;
    cin>>s;

    cout<<longestPalindrome(s)<<endl;

    
        

    
    return 0;
}