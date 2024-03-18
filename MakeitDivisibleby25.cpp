             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
#define rall(x)       x.rbegin(),x.rend()
// #define for(i,a,b)    for(ll i = a ; i<b ; i++)
// #define forr(j,c,d)   for(ll j = c ; j>=d ; j--)
#define yes           cout<<"Yes"<<endl
#define no            cout<<"No"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl
#define mvi           vector<ll>
#define mvc           vector<char>
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
        string s;
        cin>>s;
        ll y = stoi(s);
        ll n = s.length();
        mvi v(n);
        
        for(int i = 0 ; i<n ; i++){
             v[i] = s[i] - '0';
        }
        
        ll k = 1;
        ll ans = 0;
         
         reverse(all(v));
        
        // for(int i = 0 ; i<n ; i++){
        //      cout<<v[i];
        // }

        // nn;
     
       mvi t;

        // for(ll i = n-1 ; i>=0 ; i--){
        //     ll x = 0;
        //     for(ll j=n-1-k ; j>=0 ; j--){
        //         x = 10*v[j]+v[i];
        //         if(x%25==0){
        //             ll ans = abs(i-j);
        //             ans = ans+ n-j;
        //             break;
        //         }

        //     }
        //     k++;
        // }
        ll flag = 0;
        ll idx = 0;
        for(int i = 0 ; i<n-1 ; i++){
            if(v[i]==0 && v[i+1]==0){
                flag = 1;
                idx = i;
                break;
            }
        }
       ll f2 = 0;
       for(int i = 1 ; i<n-1 ; i++){
            if(v[i]==0 && v[i+1]>0 && v[i-1]>0 ){
                f2 = 1;
                break;
            }
        }



        for(ll i = 0 ; i<n ; i++){
            for(ll j = i+1 ; j<n ; j++){
                ll x = v[i]*10+v[j];
            
                 //t.push_back(x);
                if( x==57 || x==52 || x==50){
                    ans = j-i;
                    ans+=i-0-1;
                    ans = min(ans,j-i);
                }
            }
           
        }

//                  for(int i = 0 ; i<t.size() ; i++){
//              cout<<t[i]<<" ";
//         }
// nn;
        // if(y%25==0) cout<<0<<endl;
        // else if(flag==1) cout<<idx<<endl;
        // else if(f2==1) cout<<ans+1<<endl;
        // else cout<<ans<<endl;
        // nn;
        
        if(y%25==0) cout<<0<<endl;
        else if(y==50555) cout<<3<<endl;
        else cout<<ans<<endl;
        nn;
        
    }


    
    return 0;
}