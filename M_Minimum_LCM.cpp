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

long long gcdd( int a,  int b)
{
  if (b == 0)
    return a;
  return gcdd(b, a % b);
}

// Function to return LCM of two numbers 
long long lcm(int a, int b)
{
    return (a / gcdd(a, b)) * b;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int i  = 1;
      int j = n-1;
      
      if(isPrime(n)) cout<<1<<" "<<n-1<<endl;
      else if(n%2==0) cout<<n/2<<" "<<n/2<<endl;
      else if(n%3==0) cout<<n/3<<" "<<n-n/3<<endl;
     else if(n%5==0) {
        cout<<n/5<<" "<<n-n/5<<endl;
     }
     else if(n%7==0) {
        cout<<n/7<<" "<<n-n/7<<endl;
     }
     else {
        int x = 0;
        forn(i,2,n/2){
            if(n%i==0){
                x=i;
                break;
            }
        }
        cout<<n/x<<" "<<n-n/x<<endl;
     }
    
    
   
     
    //   int x,y;

    //   x = n/3;
    //   y = n-n/3;
       
    //   int maxi = INT_MAX;

    //   while(i<=j){
    //       if(lcm(i,j)<maxi){
    //         x=i;
    //         y=j;
    //         maxi =  lcm(i,j);
    //       }
    //     i++;
    //     j--;
         
    //   }
    //   cout<<x<<" "<<y<<endl;
     
    //   if(x!=y)
    //   cout<<x-1<<" "<<y+1<<endl;
    // else cout<<x<<" "<<y<<endl;

  
    }


    
    return 0;
}