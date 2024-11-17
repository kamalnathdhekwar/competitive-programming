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
       int n ;
       cin>>n;
       mvi a(n),b(n),c(n);

       forn(i,0,n) cin>>a[i];
       forn(i,0,n) cin>>b[i];
       forn(i,0,n) cin>>c[i];
       

       int m1 = mx(a);
       int m2 = mx(b);
       int m3 = mx(c);

       int k1 = -1 , k2=-1,  k3=-1;


       if(m1>=m2 && m1>=m3){
          
          forn(i,0,n){
           if(m1==a[i]){
            k1=i;
          }
        }

       }
       else if(m2>m1 && m2>m3){
            
        forn(i,0,n){
        if( m2==b[i]){
            k2=i;
        }
       }
       }
       else {
          
          forn(i,0,n){
        if( m3==c[i]){
            k3=i;
        }

       }
       }

      
      int m22=-1;
      int m33=-1;
      int m11=-1;

       if(k1!=-1){
         
         if(m2>m3){
            
            forn(i,0,n){
             if(b[i]>m22 && i!=k1){
                m22=b[i];
                k2=i;
             }

           }

         }
         else {
             
             forn(i,0,n){
                if(c[i]>m33 && i!=k1){
                    m33=c[i];
                    k3=i;
                }
             }
         }
        
       }

       else if(k2!=-1){
         
         if(m1>m3){
            
            forn(i,0,n){
             if(a[i]>m11 && i!=k2){
                m11=a[i];
                k1=i;
             }

           }
         }
         else {
             
             forn(i,0,n){
                if(c[i]>m33 && i!=k1){
                    m33=c[i];
                    k3=i;
                }
             }
         }
        
       }

       else if(k3!=-1){
         
         if(m1>m2){
            
            forn(i,0,n){
             if(a[i]>m11 && i!=k3){
                m11=a[i];
                k1=i;
             }

           }
         }
         else {
             
             forn(i,0,n){
                if(b[i]>m22 && i!=k3){
                    m22=b[i];
                    k2=i;
                }
             }
         }
        
       }

       int m333=-1;
       m22=-1;
       m11=-1;


       if(k3==-1){
             
             forn(i,0,n){
                if(c[i]>m333 && i!=k1 && i!=k2){
                    m333=c[i];
                    k3=i;
                }
             }
         }
       if(k2==-1){
                forn(i,0,n){
                if(b[i]>m22 && i!=k1 && i!=k3){
                    m22=b[i];
                    k2=i;
                }
             }
         }
          if(k1==-1){
                forn(i,0,n){
                if(a[i]>m11 && i!=k2 && i!=k3){
                    m11=a[i];
                    k1=i;
                }
             }
         }
        

       
      // cout<<k1<<" "<<k2<<" "<<k3<<endl;
      
       cout<<a[k1]+b[k2]+c[k3]<<endl;



    }


    
    return 0;
}