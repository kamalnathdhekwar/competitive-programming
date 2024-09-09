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

bool check(int n){
    forn(i,1,sqrt(n)+1){
        if(i*i==n) return true;
    }

    return false;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     string s;
     cin>>s;
     int zero = 0;
     int one  = 0;

     forn(i,0,n) if(s[i]=='0') zero++;
     else one++;
     
    //  if(check(n)==true) cout<<333<<endl;
     


     if(check(n)==1 ){
        if(zero==0 && n==4) yes;
        else if(zero==0) no;
        else {
            
            
       
           
           int row = 0 ;
            
            for(int i = 0 ; i<n-sqrt(n)+1 ; i+=sqrt(n)){

                int c = 0;

                for(int j = i+1 ; j<i+sqrt(n)-1 ; j++){
                      if(s[j]=='0') c++;
                }

                if(c==sqrt(n)-2) row++;

            }

            //cout<<row<<endl;

            if(row==sqrt(n)-2) yes;
            else no;

        }
     }
    else NO;
 
  
    }


    
    return 0;
}