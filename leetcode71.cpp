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
#define umps          unordred_map<int,int>
#define nn            cout<<"\n"
#define bs            binary_search
#define mx(x)        *max_element(all(x))
#define mn(x)        *min_element(all(x))

bool isPrime(int n) { if (n==1) return 0; for (int i=2;i<=round(sqrt(n));++i) if (n%i==0) return 0; return 1; }


//..............................................................................................................................................................

string simplifyPath(string path) {
       int n = path.length();
       
       stack<string> st;

       vector<string> v;
       
       string s ="";
       for(int i = 0 ; i<n ; i++){
        if(path[i]!='/') s+=path[i];
        else {
            v.push_back(s);
            s="";
        }
       }
       v.push_back(s);
       
       
       
       for(int i = 0 ; i<v.size() ; i++){
        if(v[i]==".." ) {
            st.pop();
            continue;
        }
        if(v[i]==".") continue;
        if(v[i]!="..") st.push(v[i]);

       }
       
       string ans = "/";
       v.clear();
      while (!st.empty()) {
    v.push_back(st.top()) ;
    st.pop();         
}
       
       reverse(v.begin(),v.end());
       for(int i = 0 ; i<v.size() ; i++){
         if(i!=v.size()-1)
         ans+='/';
         ans+=v[i];
        
       }

       for(int i = 0 ; i<ans.length()-1 ; i++){
        if(ans[i]==ans[i+1] && ans[i+1]=='/') ans.erase(i,1);
       }
       for(int i = 0 ; i<ans.length()-1 ; i++){
        if(ans[i]==ans[i+1] && ans[i+1]=='/') ans.erase(i,1);
       }
       

       return ans;
    }


int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string path = "/a//b////c/d//././/..";

    int n = path.length();
       
       stack<string> st;

       vector<string> v;
       
       string s ="";
       for(int i = 0 ; i<n ; i++){
        if(path[i]!='/') s+=path[i];
        else {
              v.push_back(s);
            
            s="";
        }
       }
       v.push_back(s);
       
      // forn(i,0,v.size()) cout<<v[i]<<" ";

       
       
       for(int i = 0 ; i<v.size() ; i++){
        if(v[i]==".." ) {
            st.pop();
            continue;
        }
        if(v[i]=="." || v[i]=="") continue;
        st.push(v[i]);

       }
    //    forn(i,0,v.size()){
    //     if(v[i]==" ") v.erase(i,1);
    //    }

       
       
       v.clear();
      while (!st.empty()) {
    v.push_back(st.top());
    st.pop();         
}
       
       reverse(v.begin(),v.end());
      
      

      string ans = "";
       for(int i = 0 ; i<v.size() ; i++){
         if(i!=v.size())
         ans+='/';
         ans+=v[i];
        
       }

    //    for(int i = 0 ; i<ans.length()-1 ; i++){
    //     if(ans[i]==ans[i+1] && ans[i+1]=='/') ans.erase(i,1);
    //    }
    //    for(int i = 0 ; i<ans.length()-1 ; i++){
    //     if(ans[i]==ans[i+1] && ans[i+1]=='/') ans.erase(i,1);
    //    }
       
    //cout<<ans<<endl;


    
    return 0;
}