             // ***  ... जय श्री राम ...  ***//
             
#include<bits/stdc++.h>
using namespace std;

#define ll            long long int
#define all(x)        x.begin(),x.end()
#define rall(x)       x.begin(),x.end()
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
        ll n;
        cin>>n;

        mvi v(n);
        for(int i = 0 ; i<n ; i++) cin>>v[i];

       
       ll flag = 0;
      ll f2=0;
        while(true){

            for(int i = 1 ; i<n-1 ; i++){
            v[i-1] = v[i-1]-1;
            v[i] = v[i]-2;
            v[i+1] = v[i+1]-1;
            if( v[i-1]<0 || v[i]<0 || v[i+1]<0) flag = 1;
            }
           
           if(flag==1) break;
    

        ll c = 0; 
        for(int i = 0 ; i<n ; i++){
            if(v[i]==0) c++;
          }
          
          

        if(c==n){
            f2=1; 
            break;
        }

        }

        for(int i = 0 ; i<n ; i++) cout<<v[i]<<" ";
        nn;
        
        ll j = n-1;
        ll l = -1;
        ll r = -1;

        for(int i = 0 ; i<n ; i++){
            if(v[i]==0) {
                l=i;
                break;
            }
        }

        for(int j = n-1 ; j>=0 ; j--){
            if(v[j]==0){
                r=j;
                break;
            }
        }

        mvi p;
     
        for(int i = 0 ; i<n ; i++) {
            if(v[i]!=0) p.push_back(v[i]);
        }

        for(int i = 0 ; i<n ; i++) cout<<p[i]<<" ";
        nn;

         mvi t;
         for(int i = 0 ; i<p.size(); i++) t.push_back(p[i]);
         
         reverse(all(t));
          
          ll cc = 0;
         for(int i = 0 ; i<p.size(); i++){
            if(p[i]==t[i]) cc++;
         }

         if(cc==p.size() && p.size()>2) YES;
         else NO;
        
         

         nn;
   

         
      
      

        // if(f2==n) YES;
        // else if(flag==1) NO;
        // else YES;


        
    }


    
    return 0;
}