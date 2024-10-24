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


int32_t  main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
       int n ,x;
       cin>>n>>x;

       mvi a(n),b(n),c(n);

       forn(i,0,n) cin>>a[i];
       forn(i,0,n) cin>>b[i];
       forn(i,0,n) cin>>c[i];

       if(x==0) {
        yes;
        continue;
       }

       int curr = 0;
       int flag = 0;
       
       reverse(all(a));
       reverse(all(b));
       reverse(all(c));
   
      
     
       int i = 0;
       int j = 0;
       int k = 0;



       while(true){

         //if(i>=n && j>=n && k>=n) break;

         //if(curr>x) break;

       
          int count = 0;

         if((x|a[a.size()-1])==x && a.size()>0) { 
            curr=(curr|a[a.size()-1]);
            a.pop_back();
              if(curr==x){
            flag = 1;
            break;
         }

            count++;
         }
         
          

          if((x|b[b.size()-1])==x && b.size()>0) {
            curr=(curr|b[b.size()-1]);
             
             b.pop_back();
              if(curr==x){
            flag = 1;
            break;
         }

             count++;
         }
        

          if((x|c[c.size()-1])==x && c.size()>0) {
            curr=(curr|c[c.size()-1]);
            c.pop_back();
              if(curr==x){
            flag = 1;
            break;
         }

             count++;
         }
         

         if(count==0) break;

       }

       if(flag==1) YES;
       else NO;


       
       

    }


    
    return 0;
}