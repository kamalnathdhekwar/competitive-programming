             // ***  ... जय श्री राम ...  ***//

#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
#define for(i,a,b)    for(ll i = a ; i<b ; i++)
#define forr(j,c,d)   for(ll j = c ; j>=d ; j--)
#define yes           cout<<"yes"<<endl
#define no            cout<<"no"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl\

#define mvi           vector<ll>
#define mvs           vector<string>
#define mpi           map<ll,ll>
#define mps           map<string,string>
#define umpi          map<string,string>
#define umps          map<ll,ll>
#define nn            cout<<endl
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        mvi a(n);
        mvi b(n);

        for(i,0,n){
            cin>>a[i];
        }

         for(i,0,n){
            cin>>b[i];
        }

     ll ca=0;
     ll cb = 0;
     
    
        // for(i,0,n){
        //     for(j,i,n){
        //         if(a[i]>a[j]){
        //            swap(a[i],a[j]);
        //             swap(b[i],b[j]);
        //         }
        //          if(b[i]>b[j]){
        //             swap(a[i],a[j]);
        //             swap(b[i],b[j]);
                   
        //         }
        //     }
        // }
        
        // sort(a.begin(),a.end());
        // sort(b.begin(),b.end());
        // cout<<" ca "<<ca<<" cb "<<cb<<endl;


        bool ss ;
         for(i,0,n){
            ss =false;
            for(j,0,n-i-1){
                if(a[i]>a[j+1]){
                   swap(a[i],a[j]);
                    swap(b[i],b[j]);
                    ss = true;
                }
                 if(b[i]>b[j+1]){
                    swap(a[i],a[j]);
                    swap(b[i],b[j]);
                    ss =true;
                   
                }
            }
            if(!ss){
                break;
            }

        }


        //  for(i,0,n){
        //     for(j,0,n){
        //         if(a[i]>a[j] && ca>cb){
        //           ;
        //             ca--;
        //         }
        //          if(b[i]>b[j] && cb>ca){
                    
        //             cb--;
        //         }
        //     }
        // }

        for(i,0,n){
            cout<<a[i]<<" ";
        }
        nn;
        for(i,0,n){
            cout<<b[i]<<" ";
        }
        nn;

    }
    
    return 0;
}
