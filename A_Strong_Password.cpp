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


int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        string ans="";
        int n = s.length();
        
        int maxi = INT_MIN;

        string ans2=s;


        for(char t ='a' ; t<='z'; t++){

            forn(i,0,n+1){


                string ss = s.substr(0,i);
                ss+=t;
                ss+=s.substr(i);

                int p =2;

                forn(j,1,ss.length()) {
                    if(ss[j]!=ss[j-1]) p+=2;
                    else p+=1;

                    if(p>maxi) {
                        maxi = p;
                        ans=ss;
                    }
                }
            }


        }
       
        
        cout<<ans<<endl;
    }


    
    return 0;
}