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


int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      mvi a(n),b(n);

      forn(i,0,n) cin>>a[i];
      forn(i,0,n) cin>>b[i];

      int i = 0;
      int j = n-1;
      
      int aa = -1;
      int bb = -1;

      while(true){

        if(aa!=-1 && bb!=-1) break;

        if(a[i]!=b[i] && aa==-1){
            aa=i;
        }

         if(a[j]!=b[j] && bb==-1){
            bb=j;
        }

        i++;
        j--;
      }
      

    //   cout<<aa<<" "<<bb<<endl;
    //   continue;

      int r = bb;
      int l = aa;
      int curr = b[l];
      int prev = a[l-1];
      int ll = l;

      while(true){
        if(l<0) break;
        if(curr<prev ){
            break;
        }else {
            ll--;
            curr = prev;
            l--;
            prev = a[l-1];

        }
      }
      
      curr=b[r];
      
      int next = 0;

      if(r<n)
      next = a[r+1];
      
      int rr= r;
      while(true){
        if(r>=n-1) break;

        if(next<curr) break;
        else {
         rr++;
         curr = next;
         r++;
         next = a[r+1];

        }
      }


     
     
      if(ll+1==0) ll++;
      

      if(a==b){
        cout<<1<<" "<<1<<endl;
      }
      else cout<<ll+1<<" "<<rr+1<<endl;

    }


    
    return 0;
}